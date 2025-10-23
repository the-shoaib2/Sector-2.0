# Calculator

read -p "Enter first number: " a
read -p "Enter second number: " b

echo
echo "Choose operation:"
echo "1) Addition (+)"
echo "2) Subtraction (-)"
echo "3) Multiplication (*)"
echo "4) Division (/)"
echo "5) Modulo (%)"
echo "6) Percentage (a is what percent of b)"
echo "7) Exit"
read -p "Enter your choice [1-7]: " choice

case $choice in
  1)
    echo "Result = $(echo "$a + $b" | bc)"
    ;;
  2)
    echo "Result = $(echo "$a - $b" | bc)"
    ;;
  3)
    echo "Result = $(echo "$a * $b" | bc)"
    ;;
  4)
    if [ "$b" == "0" ]; then
      echo "Error: Division by zero"
    else
      echo "Result = $(echo "scale=2; $a / $b" | bc)"
    fi
    ;;
  5)
    if [ "$(printf '%.0f' "$b")" -eq 0 ]; then
      echo "Error: Division by zero"
    else
      echo "Result = $(($(printf '%.0f' "$a") % $(printf '%.0f' "$b")))"
    fi
    ;;
  6)
    if [ "$b" == "0" ]; then
      echo "Error: Division by zero"
    else
      echo "Result = $(echo "scale=2; ($a / $b) * 100" | bc)%"
    fi
    ;;
  7)
    echo "Goodbye!"
    exit 0
    ;;
  *)
    echo "Invalid choice!"
    ;;
esac
