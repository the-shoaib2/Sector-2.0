
#!/bin/bash
# Script to take user input and display personal details
#Name 
#Age
#Ediucation
#Location
#Contact





echo -n "Enter Your Name: "
read name

echo -n "Enter Your Age: "
read age

echo -n "Enter Your Education: "
read education

echo -n "Enter Your Location: "
read location

echo -n "Enter Your Contact: "
read contact

echo
echo "===== Personal Details ====="
echo "Name:      $name"
echo "Age:       $age"
echo "Education: $education"
echo "Location:  $location"
echo "Contact:   $contact"