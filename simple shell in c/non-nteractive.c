#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void processCommand(const char* command) {
    // Process the command here
    // You can perform any desired actions with the command
    printf("Processing command: %s\n", command);
    // ...
}

int main() {
    // Define the maximum number of commands
    const int maxCommands = 10;
    int i;
    FILE* file;
    int commandIndex = 0;
    char line[256];

    // Allocate memory for the array of commands
    char** commands = (char**)malloc(sizeof(char*) * maxCommands);
    if (commands == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Initialize the array elements to NULL
    for (i = 0; i < maxCommands; i++) {
        commands[i] = NULL;
    }

    // Read commands from a file or any non-interactive source

    file = fopen("commands.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Failed to open the file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        line[strcspn(line, "\n")] = '\0';  // Remove newline character from input

        // Allocate memory for the command and copy it into the array
        commands[commandIndex] = strdup(line);
        if (commands[commandIndex] == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            return 1;
        }

        commandIndex++;

        if (commandIndex >= maxCommands) {
            break;  // Reached the maximum number of commands, exit the loop
        }
    }

    fclose(file);

    // Process the commands
    for (i = 0; i < commandIndex; i++) {
        processCommand(commands[i]);
    }

    // Free the allocated memory
    for (i = 0; i < commandIndex; i++) {
        free(commands[i]);
    }
    free(commands);

    return 0;
}