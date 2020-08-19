# gitflow-tutorial

## develop 브랜치에서 새로운 기능을 개발하는 과정
1. 원격 저장소에서 develop 브랜치를 pull 한다.
```
git pull origin develop	
```
2. feature 브랜치를 생성한다.
```
git checkout -b feature-sth
```
3. 개발 완료 후, feature 브랜치를 rebase 한다.
```
git checkout develop
git pull origin develop
git rebase develop feature-sth
```
4. feature 브랜치를 원격 저장소로 push 한다. (rebase 후 feature 브랜치로 자동 checkout) 
```
git push origin feature-sth
```
5. github 에서 PR을 날린다.
6. 원격 저장소 develop 브랜치에서 merge 된 결과를 pull 하고 원격 로컬 모두 feature 브랜치를 삭제한다. 
```
git checkout develop
git pull origin develop
git branch -d feature-sth
```
7. merge 되지 않으면 원격 저장소의 feature 브랜치를 삭제하고 3번부터 다시 시작한다.

## 참고 자료
* [Git 협업 가이드](https://velog.io/@jinuku/Git-%ED%98%91%EC%97%85-%EA%B0%80%EC%9D%B4%EB%93%9C)
* [Git Rebase 활용하기](https://velog.io/@godori/Git-Rebase)
