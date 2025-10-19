
# Input: Two numbers from user
# Process: Perform arithmetic operations using 3 methods
#          1. Double Parenthesis (( ))
#          2. let command
#          3. expr command
# Output: Arithmetic operations on the two numbers

# Take inputs on the same line
echo -n "Enter first number: "
read a

echo -n "Enter second number: "
read b

echo
echo "===== Using Double Parenthesis (( )) ====="

echo "Addition:       $((a + b))"
echo "Subtraction:    $((a - b))"
echo "Multiplication: $((a * b))"

if [ $b -eq 0 ]; then
   echo "Division:       Division by zero error"
   echo "Modulus:        Division by zero error"
else
   echo "Division:       $((a / b))"
   echo "Modulus:        $((a % b))"
fi


echo
echo "===== Using let Command `` ====="

let sum=a+b
let sub=a-b
let mul=a*b

if [ $b -eq 0 ]; then
   echo "Addition:       $sum"
   echo "Subtraction:    $sub"
   echo "Multiplication: $mul"
   echo "Division:       Division by zero error"
   echo "Modulus:        Division by zero error"
else
   let div=a/b
   let mod=a%b
   echo "Addition:       $sum"
   echo "Subtraction:    $sub"
   echo "Multiplication: $mul"
   echo "Division:       $div"
   echo "Modulus:        $mod"
fi


echo
echo "===== Using expr Command ====="

sum=$(expr $a + $b)
sub=$(expr $a - $b)
mul=$(expr $a \* $b)

if [ $b -eq 0 ]; then
   echo "Addition:       $sum"
   echo "Subtraction:    $sub"
   echo "Multiplication: $mul"
   echo "Division:       Division by zero error"
   echo "Modulus:        Division by zero error"
else
   div=$(expr $a / $b)
   mod=$(expr $a % $b)
   echo "Addition:       $sum"
   echo "Subtraction:    $sub"
   echo "Multiplication: $mul"
   echo "Division:       $div"
   echo "Modulus:        $mod"
fi
