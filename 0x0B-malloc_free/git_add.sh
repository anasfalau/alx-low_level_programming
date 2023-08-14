#!/bin/bash

# Add all changes to staging area
git add .

#getting the commit message
read -p "Please enter your commit message: " commit_message

# Commit with a message
git commit -m "$commit_message"

# Push changes
git push
