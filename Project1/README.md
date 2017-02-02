# CSE131

Fill in the name email and pid in the script submission.sh 

Describe briefly how you approached the project in Project_Description.txt 

After I figured out how to use Flex, I just went through the list of the tokens and either wrote
a regex for each rule or associated it with a character. The most challenging part was figuring
out how to do the token for FieldSelection. To solve that, I had to create a special start condition
for ".", which would be reset every time I hit a new line or space. Basically, if I scanned a ".",
then a special rule would activivate such that the next identifier would return a field selection instead.
Everything else was pretty straightforward.
