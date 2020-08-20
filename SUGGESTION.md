## Contributors
<a href="https://github.com/bib12ag">
  <img src="https://avatars3.githubusercontent.com/u/55792161?s=400&v=4" width="50" height="50"/>
</a>

## 같은 기능 개발 시, 원격 저장소 feature 브랜치에서 협업하는 과정
1. 원격 저장소 feature 브랜치를 pull 한다.
```bash
(feature) $ git pull origin feature	
```
2. feature/sth 브랜치를 생성한다.
```bash
(feature) $ git checkout -b feature/sth
```
3. 작은 기능으로 쪼개서 개발한다. 
```bash
(feature/sth) $ git commit -m "..."
```
4. feature/sth 브랜치에서 원격 feature 브랜치 변경사항을 가져와서 rebase 한다.
```bash
(feature/sth) $ git pull --rebase origin feature
```
5. feature/sth 브랜치를 원격 저장소로 push 한다.
```bash
(feature/sth) $ git push origin feature/sth
```
6. github 에서 원격 feature 브랜치에 PR을 날린다.
7. github 에서 merge는 기본 merge 방식을 사용한다.
8. 원격 feature 브랜치에서 merge 된 결과를 pull 하고 원격 로컬 모두 feature/sth 브랜치를 삭제한다. 
```bash
(feature) $ git pull origin feature
(feature) $ git branch -d feature/sth
(feature) $ git push origin :feature/sth
```
9. merge 되지 않으면 원격 feature/sth 브랜치를 삭제하고 3번부터 다시 시작한다.
