# 방명록 프로그램


<h3> 구현기능 </h3> <hr>

-  그림판의 브러쉬의 기능과 같이 자유롭게 그리는 형식이다. <br>
- 브러쉬의 굵기와 색상 변경이 가능하다. <br>
- 브러쉬를 이용해 그릴때마다 브러쉬의 위치 좌표, 굵기, 색상, 시간, 상태(그렸는지 안그렸는지)가 저장된다.<br>
- 저장된 상태의 정보로 처음 그린 시점 부터 리플레이가 재생된다. <br>
- Sleep 함수를 이용해 시간의 차를 구해 처음 그린 시간과 동일하게 그리게 된다. <br>
- 스레드를 사용하여 리플레이로 그림을 그리는 동안에도 그림을 그리거나, 색상을 바꾸거나 하여 추가할 수 있다.
- 파일 저장/불러오기를 통해 지정된 경로에 그림의 정보를 저장하고 불러 올 수 있다.
<h3> 제작과정 </h3> <hr>
개발시기가 곧 졸업 작품이 다가와 전에는 QR코드를 이용해 방명록을 등록했었는데, 안 쓰는 터치스크린이 있어 <br>
그림판같이 방명록을 만들면 어떨까 하여 제작하게 되었다. <br>
처음 써보는 Windows API라 생소한 게 많았지만, Window와 클라이언트가 어떻게 상호작용을 하여 클라이언트가 작동하는지, <br>
클라이언트 안에서 스레드는 어떻게 구현하며 작동하는지 알 수 있는 좋은 계기가 되었다.<br><br>

다소 아쉬운 점은 지우기 기능이 없다는 것이다. 개발 당시에 지우기 기능을 배경과 똑같은 색깔로 덧칠하는 방식으로 구현했었는데,<br>
그렇게 되면 리플레이하여 그릴 때 지운 부분이 그려진 후 지우게 되어 별로인거 같아 한 번에 지우는 클리어 기능을 구현했었던 것 같다. <br>
지금 생각해보면 지우는 좌표를 그리는 좌표가 저장된 VECTOR에서 데이터를 지우는 방식으로 구현하면 될 거 같다.

<h3> 실행과정 </h3><hr>

<h4> [메인화면] <h4>
  
![image](https://user-images.githubusercontent.com/69779719/188817030-b7a25654-f07d-475d-9ea8-b4259fc2baff.png)

![image](https://user-images.githubusercontent.com/69779719/188821337-1f7b74e9-784e-48d2-9370-5d6980268a13.png)


<h3> 사용기술 </h3> <hr>
Windows Api, C/C++

<h3> ETC </h3> <hr>
졸업 작품 전시회에서 운영



