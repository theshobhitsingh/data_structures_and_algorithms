import speech_recognition as sr
audio = ("sample.wav")
r = sr.Recognizer()
with sr.AudioFile(audio) as source:
    audioData = r.record(source) 
try:
    recognized_text = r.recognize_google(audioData)
    print("The audio file contains: " + recognized_text)
except sr.UnknownValueError:
    print('Google Speech Recognition could not understand audio')
except sr.RequestError:
    print('Could not request results from Google Speech Recognition service')