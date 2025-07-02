<!DOCTYPE html>
<html lang="en">
<!-- <head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>libft - 42 Network Custom C Library</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            line-height: 1.6;
            color: #333;
            max-width: 900px;
            margin: 0 auto;
            padding: 20px;
            background-color: #f9f9f9;
        }
        h1, h2, h3 {
            color: #2c3e50;
        }
        h1 {
            border-bottom: 2px solid #3498db;
            padding-bottom: 10px;
        }
        h2 {
            border-bottom: 1px solid #ddd;
            padding-bottom: 5px;
            margin-top: 30px;
        }
        .function-category {
            background-color: #fff;
            border-radius: 5px;
            padding: 15px;
            margin-bottom: 20px;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
        }
        .function-list {
            display: grid;
            grid-template-columns: repeat(auto-fill, minmax(300px, 1fr));
            gap: 10px;
        }
        .function-item {
            background-color: #f5f5f5;
            padding: 10px;
            border-left: 3px solid #3498db;
            border-radius: 3px;
        }
        .function-name {
            font-family: 'Courier New', monospace;
            font-weight: bold;
            color: #2980b9;
        }
        code, pre {
            background-color: #f0f0f0;
            padding: 2px 5px;
            border-radius: 3px;
            font-family: 'Courier New', monospace;
        }
        pre {
            padding: 10px;
            overflow-x: auto;
        }
        .usage-section {
            background-color: #e8f4fc;
            padding: 15px;
            border-radius: 5px;
            margin: 20px 0;
        }
        .makefile-section {
            background-color: #f0f0f0;
            padding: 15px;
            border-radius: 5px;
            margin: 20px 0;
        }
    </style>
</head> -->
<body>
    <h1>libft - 42 Network Custom C Library</h1>
    <section>
        <h2>Description</h2>
        <p>A custom C library implementing standard functions and additional utilities as part of the 42 Network curriculum.</p>
    </section>
    <section>
        <h2>Library Functions</h2>
        <div class="function-category">
            <h3>Character Functions</h3>
            <div class="function-list">
                <div class="function-item"><span class="function-name">ft_isalpha</span> - Check if character is alphabetic</div>
                <div class="function-item"><span class="function-name">ft_isdigit</span> - Check if character is digit (0-9)</div>
                <div class="function-item"><span class="function-name">ft_isalnum</span> - Check if character is alphanumeric</div>
                <div class="function-item"><span class="function-name">ft_isascii</span> - Check if character is ASCII (0-127)</div>
                <div class="function-item"><span class="function-name">ft_isprint</span> - Check if character is printable</div>
                <div class="function-item"><span class="function-name">ft_toupper</span> - Convert character to uppercase</div>
                <div class="function-item"><span class="function-name">ft_tolower</span> - Convert character to lowercase</div>
            </div>
        </div>
        <div class="function-category">
            <h3>String Functions</h3>
            <div class="function-list">
                <div class="function-item"><span class="function-name">ft_strlen</span> - Get string length</div>
                <div class="function-item"><span class="function-name">ft_strchr</span> - Find first occurrence of character</div>
                <div class="function-item"><span class="function-name">ft_strrchr</span> - Find last occurrence of character</div>
                <div class="function-item"><span class="function-name">ft_strncmp</span> - Compare first n characters</div>
                <div class="function-item"><span class="function-name">ft_strnstr</span> - Locate substring (limited to len)</div>
                <div class="function-item"><span class="function-name">ft_strdup</span> - Duplicate string</div>
                <div class="function-item"><span class="function-name">ft_strlcpy</span> - Copy string with size limit</div>
                <div class="function-item"><span class="function-name">ft_strlcat</span> - Concatenate strings with size limit</div>
                <div class="function-item"><span class="function-name">ft_substr</span> - Extract substring</div>
                <div class="function-item"><span class="function-name">ft_strjoin</span> - Concatenate two strings</div>
                <div class="function-item"><span class="function-name">ft_strtrim</span> - Trim characters from start/end</div>
                <div class="function-item"><span class="function-name">ft_split</span> - Split string by delimiter into array</div>
                <div class="function-item"><span class="function-name">ft_strmapi</span> - Create new string by applying function</div>
                <div class="function-item"><span class="function-name">ft_striteri</span> - Apply function to each character with index</div>
            </div>
        </div>
        <div class="function-category">
            <h3>Memory Functions</h3>
            <div class="function-list">
                <div class="function-item"><span class="function-name">ft_memset</span> - Fill memory with constant byte</div>
                <div class="function-item"><span class="function-name">ft_bzero</span> - Zero out memory block</div>
                <div class="function-item"><span class="function-name">ft_memcpy</span> - Copy memory area</div>
                <div class="function-item"><span class="function-name">ft_memmove</span> - Copy memory (handles overlap)</div>
                <div class="function-item"><span class="function-name">ft_memchr</span> - Locate character in memory</div>
                <div class="function-item"><span class="function-name">ft_memcmp</span> - Compare memory areas</div>
                <div class="function-item"><span class="function-name">ft_calloc</span> - Allocate and zero-initialize memory</div>
            </div>
        </div>
        <div class="function-category">
            <h3>Conversion Functions</h3>
            <div class="function-list">
                <div class="function-item"><span class="function-name">ft_atoi</span> - Convert string to integer</div>
                <div class="function-item"><span class="function-name">ft_itoa</span> - Convert integer to string</div>
            </div>
        </div>
        <div class="function-category">
            <h3>I/O Functions</h3>
            <div class="function-list">
                <div class="function-item"><span class="function-name">ft_putchar_fd</span> - Output character to file descriptor</div>
                <div class="function-item"><span class="function-name">ft_putstr_fd</span> - Output string to file descriptor</div>
                <div class="function-item"><span class="function-name">ft_putendl_fd</span> - Output string + newline to fd</div>
                <div class="function-item"><span class="function-name">ft_putnbr_fd</span> - Output number to file descriptor</div>
            </div>
        </div>
        <div class="function-category">
            <h3>Bonus (Linked List Functions)</h3>
            <div class="function-list">
                <div class="function-item"><span class="function-name">ft_lstnew</span> - Create new list element</div>
                <div class="function-item"><span class="function-name">ft_lstadd_front</span> - Add element to list start</div>
                <div class="function-item"><span class="function-name">ft_lstsize</span> - Count list elements</div>
                <div class="function-item"><span class="function-name">ft_lstlast</span> - Get last list element</div>
                <div class="function-item"><span class="function-name">ft_lstadd_back</span> - Add element to list end</div>
                <div class="function-item"><span class="function-name">ft_lstdelone</span> - Delete single list element</div>
                <div class="function-item"><span class="function-name">ft_lstclear</span> - Delete entire list</div>
            </div>
        </div>
    </section>
    <section class="makefile-section">
        <h2>Makefile Targets</h2>
        <ul>
            <li><code>make</code> or <code>make all</code> - Compile main library</li>
            <li><code>make bonus</code> - Compile bonus functions</li>
            <li><code>make clean</code> - Remove object files</li>
            <li><code>make fclean</code> - Remove objects and library</li>
            <li><code>make re</code> - Recompile everything</li>
        </ul>
    </section>
    <section>
        <h2>License</h2>
        <p>This project is part of the 42 Network curriculum and follows their guidelines.</p>
    </section>
</body>
</html>
