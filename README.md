# UART RTL Design

A synthesizable **UART (Universal Asynchronous Receiver-Transmitter)** designed from scratch using **Verilog HDL**.

This project focuses on understanding and implementing the complete RTL architecture of a UART communication interface, including transmission, reception, baud-rate timing, and control logic.

## 📌 Features

- UART Transmitter (TX)
- UART Receiver (RX)
- Start bit detection
- 8-bit data transmission/reception
- Stop bit handling
- Baud-rate generation
- TX/RX control using FSM-based logic
- Synthesizable Verilog RTL
- RTL simulation and waveform verification

## 🏗️ Architecture

```text
                 +----------------------+
                 |        UART          |
                 |                      |
   TX Data ----->|   TX Controller      |-----> TX Serial
                 |                      |
                 |   Baud Generator     |
                 |                      |
 RX Serial ----->|   RX Controller      |-----> RX Data
                 |                      |
                 +----------------------+
```

## 🔄 UART Frame Format

The UART frame used in this design follows the typical asynchronous format:

```text
Idle   Start     Data Bits              Stop
 1  |    0    | D0 D1 D2 D3 D4 D5 D6 D7 |  1
```

Data is transmitted **LSB first**.

## 🧩 Main Modules

| Module | Description |
|---|---|
| `uart_tx` | Serializes parallel data and transmits it |
| `uart_rx` | Receives serial data and converts it to parallel data |
| `baud_gen` | Generates timing required for UART communication |
| `uart_top` | Integrates the UART components |
| `uart_tb` | Testbench used for RTL verification |

> Update the module names above if your actual source files use different names.

## ⚙️ Transmission

The transmitter follows this sequence:

```text
IDLE
  ↓
START BIT
  ↓
DATA BITS
  ↓
STOP BIT
  ↓
IDLE
```

Parallel input data is converted into a serial stream and transmitted through the TX line.

## 📥 Reception

The receiver detects the start bit and samples the incoming serial data according to the configured baud timing.

```text
IDLE
  ↓
START DETECTION
  ↓
DATA SAMPLING
  ↓
STOP BIT CHECK
  ↓
DATA VALID
```

## 🧪 Verification

The UART design was verified through RTL simulation.

Verification includes:

- Reset operation
- TX data transmission
- RX data reception
- Start/stop bit generation
- Serial-to-parallel conversion
- Parallel-to-serial conversion
- Baud-rate timing
- TX/RX data integrity

### Simulation

Example simulation flow:

```bash
iverilog -o uart_sim uart_top.v uart_tb.v
vvp uart_sim
```

For waveform viewing:

```bash
gtkwave dump.vcd
```

## 📊 Expected Result

For a transmitted byte:

```text
TX Data:
10101010
```

The UART transmitter generates the corresponding serial frame, while the receiver reconstructs the original 8-bit data.

```text
TX  →  Serial Data  →  RX
                     ↓
                  10101010
```

## 🛠️ Tools & Technologies

- **HDL:** Verilog
- **Simulation:** Icarus Verilog / GTKWave
- **Design Level:** RTL
- **Target:** FPGA / ASIC-oriented digital design

## 📂 Project Structure

```text
UART/
│
├── rtl/
│   ├── uart_tx.v
│   ├── uart_rx.v
│   ├── baud_gen.v
│   └── uart_top.v
│
├── tb/
│   └── uart_tb.v
│
├── sim/
│   └── waveform.vcd
│
└── README.md
```

## 🎯 Learning Outcomes

Through this project, I gained practical experience with:

- RTL design methodology
- Finite State Machines
- Serial communication protocols
- Baud-rate timing
- Sequential and combinational logic
- RTL simulation
- Waveform debugging
- Hardware-oriented design thinking

## 🚀 Future Improvements

Possible extensions include:

- Configurable data width
- Configurable baud rate
- Parity-bit support
- FIFO buffers
- Hardware flow control
- Error detection
- SystemVerilog-based verification
- FPGA hardware implementation

## 👨‍💻 Author

**Digambar Singh**

Electronics & Communication Engineering | VLSI

Interested in **RTL Design, Design Verification, FPGA, Physical Design and ASIC Design**.
