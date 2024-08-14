import pyttsx3
from PyPDF2 import PdfReader

# Insert the name of your PDF file here
pdf_file = 'SQL.pdf'


def convert_pdf_to_speech(pdf_path, mp3_path):
    try:
        with open(pdf_path, 'rb') as file:
            pdf_reader = PdfReader(file)
            total_pages = len(pdf_reader.pages)

            speaker = pyttsx3.init()

            speaker.setProperty('rate', 150)
            speaker.setProperty('volume', 1.0)

            full_text = ""

            for page_num in range(total_pages):
                page = pdf_reader.pages[page_num]
                text = page.extract_text()

                clean_text = text.strip().replace('\n', ' ')
                print(f"Page {page_num + 1}: {clean_text}")

                full_text += clean_text + " "

            speaker.save_to_file(full_text, mp3_path)
            speaker.runAndWait()

            print(f'Conversion completed and saved as "{mp3_path}"')

    except Exception as e:
        print(f"An error occurred: {str(e)}")

    finally:
        if 'speaker' in globals():
            speaker.stop()


mp3_file = 'my.mp3'
convert_pdf_to_speech(pdf_file, mp3_file)
