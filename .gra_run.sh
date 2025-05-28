
            #!/bin/bash
            clear  # Clear the terminal screen at the start
            cd "/workspaces/liczbowa_zgadywanka"
            if [ -f gra ]; then
                rm gra  # Remove the old binary if it exists
            fi
            g++ -o gra gra.cpp
            if [ $? -eq 0 ]; then
                ./gra
            else
                echo "Compilation failed."
            fi
            echo ""  # Add a newline for better separation
            rm "/workspaces/liczbowa_zgadywanka/.gra_run.sh"
        