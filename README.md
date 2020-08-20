# gitflow-tutorial

## 1. develop 브랜치에서 새로운 기능을 개발하는 과정
1. 원격 저장소 develop 브랜치를 pull 한다.
```
(develop) git pull origin develop	
```
2. feature 브랜치를 생성한다.
```
(develop) git checkout -b feature
```
3. 작은 기능으로 쪼개서 개발한다. 
```
(feature) git commit -m "..."
```
4. feature 브랜치에서 원격 develop 브랜치 변경사항을 가져와서 merge 한다.
```
(feature) git pull origin develop
```
5. feature 브랜치를 원격 저장소로 push 한다.
```
(feature) git push origin feature
```
6. github 에서 원격 develop 브랜치에 PR을 날린다.
7. github 에서 merge는 squash and merge 방식을 사용한다.
8. 원격 develop 브랜치에서 merge 된 결과를 pull 하고 원격 로컬 모두 feature 브랜치를 삭제한다. 
```
(develop) git pull origin develop
(develop) git branch -D feature
(develop) git push origin :feature
```
9. merge 되지 않으면 3번부터 다시 시작한다.

## 2. 같은 기능 개발 시, 원격 저장소 feature 브랜치에서 협업하는 과정
1. 원격 저장소 feature 브랜치를 pull 한다.
```
(feature) git pull origin feature	
```
2. feature-sth 브랜치를 생성한다.
```
(feature) git checkout -b feature-sth
```
3. 작은 기능으로 쪼개서 개발한다. 
```
(feature-sth) git commit -m "..."
```
4. feature-sth 브랜치에서 원격 feature 브랜치 변경사항을 가져와서 rebase 한다.
```
(feature-sth) git pull --rebase origin feature
```
5. feature-sth 브랜치를 원격 저장소로 push 한다.
```
(feature-sth) git push origin feature-sth
```
6. github 에서 원격 feature 브랜치에 PR을 날린다.
7. github 에서 merge는 기본 merge 방식을 사용한다.
8. 원격 feature 브랜치에서 merge 된 결과를 pull 하고 원격 로컬 모두 feature-sth 브랜치를 삭제한다. 
```
(feature) git pull origin feature
(feature) git branch -d feature-sth
(feature) git push origin :feature-sth
```
9. merge 되지 않으면 원격 feature-sth 브랜치를 삭제하고 3번부터 다시 시작한다.

## 주의 사항
* squash and merge 를 사용할 때는 commit message 를 "feat: " 이런식으로 작성한다.

## 참고 자료
* [Git 협업 가이드](https://velog.io/@jinuku/Git-%ED%98%91%EC%97%85-%EA%B0%80%EC%9D%B4%EB%93%9C)
* [Git Rebase 활용하기](https://velog.io/@godori/Git-Rebase)
