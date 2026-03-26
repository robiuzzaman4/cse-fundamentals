#!/bin/bash

FILENAME="Archive.zip"

echo "Searching for $FILENAME..."
echo "--------------------------"

# Method 1: Using 'find'
# -iname makes it case-insensitive (finds archive.zip too)
echo "1. Searching entire system (this may take a minute):"
# On Windows/Git Bash, searching / covers your C: drive
find / -iname "$FILENAME" 2>/dev/null

echo ""

# Method 2: Using 'locate'
if command -v locate &> /dev/null; then
    echo "2. Searching via locate database:"
    locate "$FILENAME" 2>/dev/null
else
    echo "2. 'locate' command not found, skipping."
fi

echo "--------------------------"
echo "Search complete."