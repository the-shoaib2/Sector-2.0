
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



# ┌──root@kali:[~LAB 3] 
# └─#./input_personal_info.sh
# Enter Your Name: MD Shoaib Khan
# Enter Your Age: 23
# Enter Your Education: BSc in CSE
# Enter Your Location: Dhaka
# Enter Your Contact: 01909978166

# ===== Personal Details =====
# Name:      MD Shoaib Khan
# Age:       23
# Education: BSc in CSE
# Location:  Dhaka
# Contact:   01909978166