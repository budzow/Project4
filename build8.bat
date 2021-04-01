"D:\build-wrapper-win-x86-6.17\build-wrapper-win-x86\build-wrapper-win-x86-64.exe" --out-dir bwo msbuild.exe /t:rebuild 
sonar-scanner -Dsonar.projectKey=Project4 -Dsonar.sources=. -Dsonar.cfamily.build-wrapper-output=bwo -Dsonar.host.url=http://l:8000 -Dsonar.login=admin -Dsonar.password=admin -X -Dsonar.login=admin -Dsonar.password=admin1
