
            #!/bin/bash
            clear  # Clear the terminal screen at the start
            cd "/workspaces/liczbowa_zgadywanka"
            if [ -f main ]; then
                rm main  # Remove the old binary if it exists
            fi
            g++ -o main main.cpp
            if [ $? -eq 0 ]; then
                ./main
            else
                echo "Compilation failed."
            fi
            echo ""  # Add a newline for better separation
            rm "/workspaces/liczbowa_zgadywanka/.main_run.sh"
        