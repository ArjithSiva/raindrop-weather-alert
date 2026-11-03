# 14 – Raindrop Weather Alert

YL-83 raindrop board gives an early "it's starting to rain" buzzer alert.

## Components
- Arduino Uno / Nano
- YL-83 raindrop sensor board (+ its separate comparator/driver board, if yours is a 2-board kit)
- Buzzer + LED

## Wiring
| YL-83 | Arduino |
|---|---|
| VCC | 5V |
| GND | GND |
| AO | A0 |
| DO | D2 |

Buzzer → D8, LED → D7.

## Libraries
None.

## How it works
The board's exposed copper traces short slightly as water bridges them, dropping the analog reading. Lower analog value = more rain. DO gives a simple threshold trigger (set by the board's onboard potentiometer); the sketch also logs the analog intensity so you can tell light drizzle from a downpour.

## Note
The bare traces corrode over time if left wet — fine for a desk demo/short outdoor test, not meant for permanent outdoor mounting without weatherproofing.
