🔐 Decryption & Encryption Tool with Frequency Analysis 🧮
Welcome to the Decryption & Encryption Tool! This interactive C++ program allows you to analyze text frequencies, decrypt encoded messages using frequency analysis or Vigenère cipher, and encrypt your custom messages with a pseudo-random key generator.

🚀 Features
🕵️‍♂️ Decryption
Frequency Analysis:
Analyzes the letter frequencies of a given text.
Helps decode encrypted text using statistical patterns.
Vigenère Cipher Decryption:
Decodes a given encoded message using a list of potential keys.
Reveals the hidden message for the correct key.
🔐 Encryption
Custom Text Encryption:
Encrypts user-provided text with a pseudo-random key generator.
Produces a unique encrypted message and its corresponding key.
📦 How to Use
1️⃣ Clone and Compile
bash
Copy code
git clone https://github.com/yourusername/decryption-encryption-tool.git
cd decryption-encryption-tool
g++ main.cpp -o decryption_tool
2️⃣ Run the Program
bash
Copy code
./decryption_tool
🕹️ Interactive Gameplay
Menu
Decryption with Frequency Analysis

Analyzes the text and decodes the message using frequency patterns and Vigenère cipher.
Example Input:
arduino
Copy code
"alen pxysv aeglv dzlw nzax ewsmt dwese iytn vrtlp ..."
Example Output:
mathematica
Copy code
Decoded Text: "the city however does not tell its past ..."
Encryption

Encrypt your custom text with a unique key.
Example:
mathematica
Copy code
Input Text: "Secure the data"
Key: 15
Encrypted Message: "Xjgjwf ymj ifyq"
Encryption Key: 15 12 20 ...
🔍 Example Walkthrough
Decrypting Text
Choose 1 to perform frequency analysis and decryption.
The program will:
Analyze text letter frequencies.
Try various keys to decode the message.
Example Output:
vbnet
Copy code
Letter frequencies:
a: 12
b: 5
c: 8
...
Decoded Text with key "heal": "the city however does not tell its past ..."
Encrypting Text
Choose 2 to encrypt a custom text.
Enter your desired text and a key between 1-100.
The program will:
Encrypt your text with a pseudo-random key.
Provide the encrypted message and key for decryption.
Example Output:
mathematica
Copy code
Encrypted Message: "Xjgjwf ymj ifyq"
Key: 15 12 20 ...
🛠️ Technical Details
Language: C++
Decryption Methods:
Frequency analysis
Vigenère cipher
Encryption:
Uses a pseudo-random key generator based on user input and time.
Libraries Used:
<iostream>: For input/output operations.
<string>: For handling text.
<vector>: For storing data.
<ctime>: For time-based randomness.
<unistd.h>: For adding delays (visual effects).
📜 Sample Output
plaintext
Copy code
🔓 Do you want to decrypt or encrypt a message?
1. Decrypt with frequency analysis
2. Encrypt a custom message
Your choice: 1

Analyzing frequencies...
Letter frequencies:
a: 12
b: 5
c: 8
...

Decoding text with key "heal"...
Decoded Text: "the city however does not tell its past but contains it like ..."
plaintext
Copy code
🔐 What text would you like to encrypt?
Input: "Secure the data"
Enter a positive number between 1 and 100: 15

Encrypting...
Encrypted Message: "Xjgjwf ymj ifyq"
Encryption Key: 15 12 20 ...
🤔 Why Use This Tool?
Learn frequency analysis techniques for cryptography.
Understand Vigenère cipher decryption.
Experiment with pseudo-random encryption for custom messages.
A hands-on approach to data security and cryptography concepts.
📄 License
This project is licensed under the MIT License.

❤️ Contributing
Fork the repository.
Create a feature branch: git checkout -b feature/amazing-feature.
Commit your changes: git commit -m 'Add amazing feature'.
Push to the branch: git push origin feature/amazing-feature.
Submit a pull request.
✨ Start Encrypting & Decrypting Now!
bash
Copy code
git clone https://github.com/yourusername/decryption-encryption-tool.git
cd decryption-encryption-tool
g++ main.cpp -o decryption_tool
./decryption_tool
💡 Dive into the world of cryptography with this interactive tool! 🔒
