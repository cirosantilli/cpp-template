inouts = [
    # Template for stdin stdout only tests.
    #["name", "stdin", "stdout"],

    # Fully documented test.
    [
        "Name of test",

        # stdin. Default: "".
        "stdin input\n",

        # Expected stdout. Default: "".
        "Enter a line:\nstdin = stdin input\nargv[1] = arg1\nIt compiles!\n",

        # Command line arguments. Default "".
        ["arg1", "arg2"],

        # Expected stderr. Default: "".
        "stderr\n",

        # Expected exit status. Default: 0.
        0,
    ],
]
