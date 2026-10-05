#!/bin/bash

# Exit immediately if a command fails
set -e

# File & module definitions based on your folder structure
TOP_MODULE="tb_uart_top"
TB_FILE="tb_uart_top.v"
DESIGN_FILES="uart_top.v uart_tx.v uart_rx.v"

echo "----------------------------------------"
echo " Running Verilator Build...             "
echo "----------------------------------------"

# Compile all design files and testbench into a simulation binary with tracing enabled
verilator --binary --timing --trace -Wall -Wno-fatal \
    --top-module ${TOP_MODULE} \
    ${DESIGN_FILES} ${TB_FILE} \
    -Mdir obj_dir

echo "----------------------------------------"
echo " Executing Simulation...                "
echo "----------------------------------------"

# Execute the compiled simulation binary
./obj_dir/V${TOP_MODULE}

echo "----------------------------------------"
echo " Checking Waveforms...                  "
echo "----------------------------------------"

# Check for generated VCD waveform files and launch GTKWave
if [ -f "dump.vcd" ]; then
    echo "Launching GTKWave with dump.vcd..."
    gtkwave dump.vcd &
elif [ -f "${TOP_MODULE}.vcd" ]; then
    echo "Launching GTKWave with ${TOP_MODULE}.vcd..."
    gtkwave ${TOP_MODULE}.vcd &
else
    echo "Simulation finished. No .vcd file found."
    echo "To view waveforms, ensure \$dumpfile(\"dump.vcd\"); and \$dumpvars; are in ${TB_FILE}."
fi


