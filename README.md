# Trying to learn how to code

### Credit (CS50x)
* Basic Credit Card Number checker based on Luhn's Algorithm
* Only VISA, MASTERCARD, and AMEX are supported

### Readability (CS50x)
* Determines a text's reading level base on Coleman-Liau Index
  * Coleman-Liau Index uses the average number of letters per 100 words and average number of sentences per 100 words to calcuate the reading level
   <p align="center">CLI = 0.05888 * L - 0.296 * S - 15.8 <br/>L = average number of letters per 100 words <br/>S = average number of sentences per 100 words</p>
* **NOTE:** The program counts each period as sentence. This will give an inaccurate reading level with text containing periods that doesn't end the sentence. (such as: Mr. , Mrs. , etc.)
