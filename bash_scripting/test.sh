#!/bin/bash
echo "initialize"
mkdir images documents programs
mv *.png images
# mv *.jpg images
# mv *.doc documents
# mv *.docx documents
# mv *.pdf documents
# mv *.ppz documents
# mv *.exe programs
# mv *.msi programs
if [ $? -eq 0 ]; then 
  echo "Success!"
else
  echo "ERROR!"
fi