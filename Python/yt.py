# # import tkinter
# # import customtkinter
# # from pytube import YouTube

# # # System Settings
# # customtkinter.set_appearance_mode("System")
# # customtkinter.set_default_color_theme("dark-blue")

# # #App Frame
# # app = customtkinter.CTk()
# # app.geometry("800x500")
# # app.title("YouTube Videos Downloader")

# # def startDownload():
# #     try:
# #         ytLink = url.get()  # Corrected to use url instead of link
# #         ytObject = YouTube(ytLink)
# #         video = ytObject.streams.get_highest_resolution()
# #         video.download()
# #         print("Video Downloaded Successfully!")
# #     except:
# #         print("Enter a valid link!")


# # # Adding UI
# # title = customtkinter.CTkLabel(app, text="Paste YouTube Link here")
# # title.pack(padx = 20, pady = 15)

# # # Link Input
# # url = tkinter.StringVar()
# # link = customtkinter.CTkEntry(app, width=300, height= 40,textvariable= url )
# # link.pack()

# # # Download Button
# # download = customtkinter.CTkButton(app, text="Download", command= startDownload)
# # download.pack(padx = 20, pady = 15)

# # #Run our app
# # app.mainloop()


# from pytube import YouTube
# import tkinter as tk
# from tkinter import filedialog

# def download_video(url, save_path):
#     try:
#         yt = YouTube(url)
#         streams = yt.streams.filter(progressive=True, file_extension="mp4")
#         highest_res_stream = streams.get_highest_resolution()
#         highest_res_stream.download(output_path=save_path)
#         print("Video downloaded successfully!")
#     except Exception as e:
#         print(e)

# def open_file_dialog():
#     folder = filedialog.askdirectory()
#     if folder:
#         print(f"Selected folder: {folder}")

#     return folder

# if __name__ == "__main__":
#     root = tk.Tk()
#     root.withdraw()

#     video_url = input("Please enter a YouTube url: ")
#     save_dir = open_file_dialog()

#     if save_dir:
#         print("Started download...")
#         download_video(video_url, save_dir)
#     else:
#         print("Invalid save location.")


from tkinter import filedialog
import tkinter as tk
from pytubefix import YouTube
yt = YouTube('http://youtube.com/watch?v=2lAe1cqCOXo')


def download_video(url, save_path):
    try:
        yt = YouTube(url)
        streams = yt.streams.filter(progressive=True, file_extension="mp4")
        highest_res_stream = streams.get_highest_resolution()
        highest_res_stream.download(output_path=save_path)
        print("Video downloaded successfully!")
    except Exception as e:
        print(e)


def open_file_dialog():
    folder = filedialog.askdirectory()
    if folder:
        print(f"Selected folder: {folder}")

    return folder


if __name__ == "__main__":
    root = tk.Tk()
    root.withdraw()

    video_url = input("Please enter a YouTube url: ")
    save_dir = open_file_dialog()

    if save_dir:
        print("Started download...")
        download_video(video_url, save_dir)
    else:
        print("Invalid save location.")
