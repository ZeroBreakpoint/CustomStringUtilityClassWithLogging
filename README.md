# String Class Test Logger (C++)

This project extends upon the 'CustomStringUtilityClass', previously developed `String` utility class by adding an automated test logging system.  The program executes a suite of functionality tests and outputs results to a log file (`results.txt`) with timestamps and success metrics.  Designed as part of one of my early AIE assessments.

## Key Features

- **Test Framework**: Runs 17 tests on the custom `String` class functions and operators.
- **Log File Output**: Results are written to a plain text file.
- **Append Mode**: New test runs are appended to existing logs to preserve history.
- **Timestamped Entries**: Each run logs the date and time of test execution.
- **Success Rate**: Displays a percentage score based on passed tests.
- **Spreadsheet Ready**: Results formatted using tabs and line breaks for easy import into Excel/Google Sheets.

## Covered Functionality

The following `String` class functions are tested:

- `.Length()`
- `.CharacterAt(index)`
- `.EqualTo()`
- `.Append()`
- `.Prepend()`
- `.CStr()`
- `.ToLower()` / `.ToUpper()`
- `.Find()` and `.Find(startIndex)`
- `.Replace()`
- `.ReadFromConsole()` / `.WriteToConsole()`
- `==`, `!=`, `<`, `=`, and `[]` operator overloads

## How to Run

1. Clone or download the repository.
2. Open the project in Visual Studio.
3. Build in **Release** mode.
4. Run the executable to execute tests and append results to `results.txt`.

This project demonstrates robust class testing, file I/O and time handling in C++, while reinforcing good practices in modularity and version control.
