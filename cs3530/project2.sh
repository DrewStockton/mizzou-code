ats85b@remoteapps-li:~$ cd #go to current directory
ats85b@remoteapps-li:~$  mkdir fileProcessing #create a directory titled fileProcessing
ats85b@remoteapps-li:~$  cd fileProcessing #change current directory to fileProcessing
ats85b@remoteapps-li:~/fileProcessing:~$  touch ats85b #create a file titled ats85b
ats85b@remoteapps-li:~/fileProcessing:~$  ls -l #print all files in fileProcessing
  total 0
  -rw-rw-r-- 1 ats85b ats85b 0 feb 13 17:49 ats85b #only file in fileProcessing is ats85b
ats85b@remoteapps-li:~/fileProcessing:~$  chmod g+w ats85b # change permission for ats85b (g=group, w=permission to write)
ats85b@remoteapps-li:~/fileProcessing$ cd nextDirectory #Change the directory so you are in the nextDirectory
ats85b@remoteapps-li:~/fileProcessing/nextDirectory$ touch drewStockton #Create an empty file and name it “yourName”
ats85b@remoteapps-li:~/fileProcessing/nextDirectory$ cd #return to the parent directory
ats85b@remoteapps-li:~$ ls -1 fileProcessing #list the contents and the permissions in the fileProcessing directory.
  total 4
  -rw-rw-r -- 1 ats85b ats85b
  drwxrwxr-x 2 ats85b ats85b 4096 Feb 14 12:13 nextDirectory
ats85b@remoteapps-li:~$ cd fileProcessing
ats85b@remoteapps-li:~/fileProcessing$ ls -l nextDirectory
  total 0
  -rw-rw-r--1 ats85b ats85b 0 Feb 14 12:13 drewStockton
  -r--rw-r--1 ats85b ats85b 0 Feb 13 18:44 DrewStockton
ats85b@remoteapps-li:~/fileProcessing$  chmod u-w nextDirectory/drewStockton #user does NOT have write permission

#added a text file of the declaration of independence, titled "Declaration.txt"
#added Declaration.txt to the fileProcessing directory
ats85b@remoteapps-li:~/fileProcessing$ ls -l #list the contents of the fileprocessing directory
  total 12
  -rw-rw-r-- 1 ats85b ats85b 0 Feb 13 17:49 ats85b
  -rw-rw-r-- 1 ats85b ats85b 8089 Feb 14 12:05 Declaration.txt
  drwxrwxr-x 2 ats85b ats85b 4096 Feb 14 12:13 nextDirectory

  ats85b@remoteapps-li:~/fileProcessing$ grep -i 'independent' Declaration.txt | wc -w | tee wcDeclaration.txt #find how many times the word "declaration" appears
  173 #outputted number of times "declaration" appeared

  ats85b@remoteapps-li:~/fileProcessing$ grep -i 'Annihilation' Declaration.txt | sed 's/Annihilation/ANNIHILATION/g' | tee capsDeclaration.txt #Capitalize every letter of the word "annihilation" when it appears, and redirect to a file
  #printed output of all sentences with the world ANNIHILATION in them

  ats85b@remoteapps-li:~/fileProcessing$ grep -i 'states' Declaration.txt | sed -E 's/\b([Ss]tates)s\b/\1X/g' > statesDeclaration.txt #change every instance of "States/states" to "StateX/Statex" and redirect output to a new file
  ats85b@remoteapps-li:~/fileProcessing$ wc statesDeclaration.txt
    4  485  2964  statesDeclaration.txt

  ats85b@remoteapps-li:~/fileProcessing$ nl Declaration.txt | sort -n > sortedLines #count lines in Declaration.txt and sort into a file
  
