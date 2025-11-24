riscv32-unknown-elf-gcc -march=rv32imc -mabi=ilp32 -static -mcmodel=medany -Wall -g -fvisibility=hidden -ffreestanding -c hello_world.c
riscv32-unknown-elf-gcc -march=rv32imc -mabi=ilp32 -static -mcmodel=medany -Wall -g -fvisibility=hidden -ffreestanding -c boot.S
riscv32-unknown-elf-ld -nostdlib -nostartfiles -Tlink.ld hello_world.o boot.o -o hello_world.elf
