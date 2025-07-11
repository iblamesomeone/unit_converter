# Unit Converter in C++

This is a simple console-based Unit Converter application written in C++. It allows users to convert between common distance units:

- Kilometer
- Foot
- Miles
- Meter

## Features

- Converts units bidirectionally.
- User-friendly menu interface.
- Supports repeated conversions in one run.
- Input validation to prevent errors from invalid entries.

## Conversion Support

Depending on the selected input unit, the program provides conversions into the other three units:

| From       | To - 1         | To - 2        | To - 3        |
|------------|----------------|---------------|---------------|
| Kilometer  | Foot           | Miles         | Meter         |
| Foot       | Kilometer      | Miles         | Meter         |
| Miles      | Kilometer      | Foot          | Meter         |
| Meter      | Kilometer      | Foot          | Miles         |

## How to Use

1. Run the program.
2. Choose the unit you want to convert **from** (1 to 4).
3. Enter the numeric value.
4. See the converted values.
5. Choose whether to perform another conversion or exit.

## Sample Screenshot

<img width="1512" height="982" alt="Screenshot 2025-07-11 at 8 07 27 PM" src="https://github.com/user-attachments/assets/af809a04-6162-4dd5-8eb7-67c4359e73c9" />
