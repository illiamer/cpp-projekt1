git --version
cd git-projekt1
git init
git branch -M main
git add projekt1.cpp
git commit -m "Initial commit – dodano projekt1.cpp"
git config --global user.name "Illia"
git config --global user.email "illiapromer@gmail.com"
git add projekt1.cpp
git commit -m "Initial commit – dodano projekt1.cpp"
git remote add origin https://github.com/illiamer/cpp-projekt1.git
git push -u origin main
git branch factorial
git branch prime
git checkout factorial
git add projekt1.cpp
git commit -m "Dodano funkcję factorial()"
git add projekt1.cpp
git commit -m "Dodano użycie funkcji factorial() w menu"
git checkout prime
git add projekt1.cpp
git commit -m "Dodano funkcję isPrime()"
git commit -m "Dodano użycie funkcji isPrime() do menu"
git add projekt1.cpp
git commit -m "Dodano użycie funkcji isPrime() do menu"
git push origin factorial
git push origin prime
git checkout main
git merge factorial
git push
git merge prime
git add projekt1.cpp
git commit -m "Rozwiązano konflikt przy scalaniu gałęzi prime z main"
git push
history
doskey /history
