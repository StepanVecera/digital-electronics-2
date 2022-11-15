## Pre-Lab preparation

Use **AVR® Instruction Set Manual** from Microchip [Online Technical Documentation](https://onlinedocs.microchip.com/), find the description of selected instructions, and complete the table.

   | **Instruction** | **Operation** | **Description** | **Cycles** |
   | :-- | :-: | :-- | :-: |
   | `add Rd, Rr` | Rd = Rd + Rr | Add two registers without the C flag and places the result in register Rd | 1 |
   | `andi Rd, K` | Rd = Rd and K | Logical AND between register Rd and 8-bit constant K | 1 |
   | `bld Rd, b` | Rd(b) = T | Copies the T bit in the SREG (status register) to bit b in register Rd | 1 |
   | `bst Rd, b` | T = Rd(b) | Stores bit b from Rd to the T bit in SREG (status register) | 1 |
   | `com Rd` | Rd = 0xFF - Rd | One's complement of a register Rd | 1 |
   | `eor Rd, Rr` | Rd = Rd xor Rr | Logical EOR between the contents of register Rd and register Rr and places the result in the destination register Rd | 1 |
   | `mul Rd, Rr` | R1:R0 = Rd x Rr | Performs b-bit x 8-bit = 16-bit unsigned multiplication | 1 |
   | `pop Rd` | Rd = STACK | Loads register Rd with a byte from STACK (stack pointer is pre-incremented by 1 before the POP) | 1 |
   | `push Rr` | STACK = Rr | Stores the contents of register Rr on the STACK (stack pointer is pre-incremented by 1 after the PUSH) | 1 |
   | `ret` | PC(15:0) = STACK / PC(21:0) = STACK | Returns from the subroutine, the return adress is loaded from STACK (stack pointer is pre-incremented scheme during RET) | 2/3 |
   | `rol Rd` |  | Shifts all bits in Rd one place to the left | 1 |
   | `ror Rd` |  | Shifts all bits in Rd one place to the right | 1 |
