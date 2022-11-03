echo Initial Build
call gradlew.bat


for %%f in (src/MyTests/basic/*.jpf) do (
	echo  _________________________
	echo  _________________________
    echo %%~nf
	java -jar build/RunJPF.jar src/MyTests/basic/%%~nf.jpf
)

echo Finished