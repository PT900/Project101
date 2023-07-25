import json

def create_json_req_file():
    print("Please enter JSON request:")
    json_input = input()

    try:
        json_data = json.loads(json_input)
        file_name = "test2.txt"

        with open(file_name, 'w') as file:
            json.dump(json_data, file, indent=2)

        print(f"JSON request text file has been saved to '{file_name}'.")
    except:
        print(f"Error: Invalid JSON format. Please enter a valid JSON request.")

if __name__ == '__main__':
    create_json_req_file()

# Old version

# def create_text_file(file_name, content):
#     try:
#         with open(file_name, 'w') as file:
#             file.write(content)
#         print(f"Text file '{file_name}' has been created successfully.")
#     except IOError:
#         print(f"Error: Unable to create the text file '{file_name}'.")

# if __name__ == '__main__':
    # file_name = "test2.txt"
    # content = """This is an example of text file created by python.
    # It contains multiple lines of text.
    # You can add any content you like."""
    # create_text_file(file_name, content)

