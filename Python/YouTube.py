import tkinter as tk
from tkinter import filedialog
import customtkinter as ctk
from pytubefix import YouTube

# System Settings
ctk.set_appearance_mode("System")
ctk.set_default_color_theme("green")

# App Frame
app = ctk.CTk()
app.geometry("1000x500")
app.title("𝐘𝐨𝐮𝐓𝐮𝐛𝐞 𝐕𝐢𝐝𝐞𝐨𝐬 𝐃𝐨𝐰𝐧𝐥𝐨𝐚𝐝𝐞𝐫")

# Create variables to store user inputs
url_var = tk.StringVar()
save_path_var = tk.StringVar()


def start_download():
    url = url_var.get()
    save_path = save_path_var.get()
    if not url or not save_path:
        status_label.config(
            text="𝘜𝘙𝘓 𝘰𝘳 𝘚𝘢𝘷𝘦 𝘗𝘢𝘵𝘩 𝘪𝘴 𝘮𝘪𝘴𝘴𝘪𝘯𝘨!", text_color="red")
        return

    try:
        yt = YouTube(url)
        streams = yt.streams.filter(progressive=True, file_extension="mp4")
        highest_res_stream = streams.get_highest_resolution()
        highest_res_stream.download(output_path=save_path)
        status_label.config(
            text="𝙑𝙞𝙙𝙚𝙤 𝙙𝙤𝙬𝙣𝙡𝙤𝙖𝙙𝙚𝙙 𝙨𝙪𝙘𝙘𝙚𝙨𝙨𝙛𝙪𝙡𝙡𝙮!", text_color="green")
    except Exception as e:
        status_label.config(text=f"Error: {str(e)}", text_color="red")


def open_file_dialog():
    folder = filedialog.askdirectory()
    if folder:
        save_path_var.set(folder)
        path_label.config(text=f"𝙎𝙚𝙡𝙚𝙘𝙩𝙚𝙙 𝙛𝙤𝙡𝙙𝙚𝙧: {folder}")


def create_ui():
    # Title
    title = ctk.CTkLabel(
        app, text="𝚈𝚘𝚞𝚃𝚞𝚋𝚎 𝚅𝚒𝚍𝚎𝚘𝚜 𝙳𝚘𝚠𝚗𝚕𝚘𝚊𝚍𝚎𝚛", font=("Arial", 50))
    title.pack(pady=20)

    # URL Entry
    url_frame = ctk.CTkFrame(app)
    url_frame.pack(pady=10)
    url_label = ctk.CTkLabel(url_frame, text="𝙔𝙤𝙪𝙏𝙪𝙗𝙚 𝙑𝙞𝙙𝙚𝙤 𝙐𝙍𝙇:")
    url_label.pack(side="left", padx=10)
    url_entry = ctk.CTkEntry(url_frame, textvariable=url_var, width=400)
    url_entry.pack(side="left", padx=10)

    # Save Path
    path_frame = ctk.CTkFrame(app)
    path_frame.pack(pady=10)
    path_button = ctk.CTkButton(
        path_frame, text="𝙎𝙚𝙡𝙚𝙘𝙩 𝙎𝙖𝙫𝙚 𝙋𝙖𝙩𝙝", command=open_file_dialog)
    path_button.pack(side="left", padx=10)
    global path_label
    path_label = ctk.CTkLabel(path_frame, text="𝙉𝙤 𝙛𝙤𝙡𝙙𝙚𝙧 𝙨𝙚𝙡𝙚𝙘𝙩𝙚𝙙")
    path_label.pack(side="left", padx=10)

    # Download Button
    download_button = ctk.CTkButton(
        app, text="𝗗𝗼𝘄𝗻𝗹𝗼𝗮𝗱 𝗩𝗶𝗱𝗲𝗼", command=start_download)
    download_button.pack(pady=20)

    # Status Label
    global status_label
    status_label = ctk.CTkLabel(app, text="", font=("Arial", 14))
    status_label.pack(pady=20)


create_ui()

app.mainloop()
