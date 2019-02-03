print("Hello Github!")                             # Print the text to the console window
file_squestns = open('StudentQuestions.txt', 'r')  # Open the file for reading
file_sanswers = open('StudentAnswers.txt', 'w')    # Open the file for writing
for line in file_squestns:                         # For each line in the reading file, do the following:
  ans = input(line)                                  # 1. Provide the user with a line from the read file; assign user input to "ans"
  file_sanswers.write(ans + '\n')                    # 2. Write the user input to the write file
print("Goodbye Github!")                           # Print the text to the console window
file_squestns.close()                              # Close the read file
file_sanswers.close()                              # Close the write file



