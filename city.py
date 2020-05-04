#check a list for a paint color request and print status of color "found"/"not found"
Task 3
Program: Paint Stock
check a list for a paint color request and print status of color "found"/"not found"

create list, paint_colors, with 5+ colors
get user input of string:color_request
iterate through each color in paint_colors to check for a match with color_request
# [ ] complete paint stock


Task 4
Program: Foot Bones Quiz
Create a function that will iterate through foot_bones looking for a match of a string argument

Call the function 2 times with the name of a footbone
print immediate feedback for each answer (correct - incorrect)
print the total # of foot_bones identified
The program will use the foot_bones list:

foot_bones = ["calcaneus", "talus", "cuboid", "navicular", "lateral cuneiform",
             "intermediate cuneiform", "medial cuneiform"]
Bonus: remove correct response item from list if correct so user cannot answer same item twice

# [ ] Complete Foot Bones Quiz
# foot_bones = ["calcaneus", "talus", "cuboid", "navicular", "lateral cuneiform",
#             "intermediate cuneiform", "medial cuneiform"]


# [ ] bonus version


paint_colors=['Red', 'White', 'Yollow','Green','Blue']
color_request=input("Enter which color you want to paint: ")

for i in paint_colors:
    if i.lower().count(color_request):
        if True:
            print("Found")
        else:
            print("Not Found")
