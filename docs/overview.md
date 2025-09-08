# Overview

## ***__Inputs and Outputs__***
- Pins 0-3: First 4-bit number (nibble 1)
- Pins 4-7: Second 4-bit number (nibble 2)
- Pins 8-11: Output 4-bit result
- Pin 12: Carry bit output

## ***__Code Structure__***
1. Variables: `nibla` to `nib2d`, `res1a` to `res1d`, `carryBit`
2. Functions:
- `somaBit()` -> XOR logic to calculate sum bit
- `somaCarryBit()` -> Full adder logic to calculate carry
3. Loop:
- Read inputs from pins
- Perform addition if `soma` flag is 1
- Write results to output pins

## ***__Full Adder Logic__***
- Sum: A XOR B XOR Carry
- Carry: (A AND B) OR (B AND Carry) OR (A AND Carry)
