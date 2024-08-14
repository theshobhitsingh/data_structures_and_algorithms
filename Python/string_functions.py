story="once upon a time in INDIA"
#String Functions
print(len(story))
print(story.endswith("INDIA")) 
print(story.count("O"))
print(story.capitalize())
print(story.find("INDIA"))
print(story.replace("once","1"))
#Let's count the double spaces in a String
st="This has double  space"
print(st.find("  "))
print("Double space")
#Let's count the double spaces in a String & then replace them with single space
print(st.replace("  "," "))