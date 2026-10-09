# Learning notes

Keep short notes organised by topic. For each useful discovery, record what confused you, what helped, and a small example.

## Decimal output formatting

`std::fixed` with `std::setprecision(n)` prints `n` digits after the decimal point. Without `fixed`, `setprecision(n)` normally controls significant digits.

The formatting persists on the output stream until it is changed. Use `<iomanip>` for `setprecision`.
