Veri Yapıları dersi 1. ödevimdir.Ödevde istenenler:

MinGW C++ ortamında derlenen bir program yazılacaktır.
Bu ödevde bağlı listeler (herhangi bir tür olabilir. Arraylist hariç) kullanarak gen, kromozom ve DNA
işlemleri yapılacaktır. Dna.txt isimli bir dosya okunacak. Okunan kromozomlar bağıl listede
tutulacaktır. - - -
Dosyada her satırda bir kromozom bulunacak
Kromozomlar boşluklar ile ayrılmış genlerden oluşacak.
Her satırdaki kromozomdaki gen sayısı değişiklik gösterebilir.
Geliştirilecek programda aşağıdaki seçenekler bulunması gerekmektedir.
1- Çaprazlama
2- Mutasyon
3- Otomatik İşlemler
4- Ekrana Yaz
5- Çıkış
Çaprazlama
Kullanıcıdan hangi satırdaki kromozomları belirttiği alınacaktır. Kromozom satır numarası 0’dan
başlar. İki tane kromozom satır numarasını kullanıcıdan aldıktan sonra kromozomlar üzerinde
çaprazlama yapıp oluşan yeni kromozomları popülasyona (Şu ana kadar ki tüm kromozomlar)
ekleyecektir.
Seçilen ilk kromozomun orta noktasının sol tarafı ile ikinci kromozomun orta noktasının sağ tarafı
birleştirilip yeni kromozom popülasyona eklenecektir. Aynı şekilde ilk kromozomun orta noktasının
sağ tarafı ile ikinci kromozomun orta noktasının sol tarafı birleştirilip oluşan yeni kromozom
popülasyona eklenecektir. Yukarıdaki örnekten devam edilecek olursa kullanıcı örneğin 0 ve 3 satır
sayılarını girdi. Eğer kromozomdaki gen sayısı tek sayı ise ortadaki genin solu ve sağı alınırken kendisi
dahil edilmeyecektir.
Mutasyon
Kullanıcıdan kromozom satır numarası ve gen sütun numarası alınacak ilgili gen mutasyona uğrayıp X
karakterine dönüşecektir.
Otomatik İşlemler
Bu seçilirse Islemler.txt dosyasından hangi işlemlerin yapılacağı alınıp bu işlemlerin tamamı uygulanıp
işlem tamamlandı mesajı ekrana yazılacaktır.
Ekrana Yaz
Ekrana yazma işleminde her kromozomda sağdan sola giderek kromozomun ilk geninden daha küçük
bir gen bulunduğu gibi bu gen kromozomun ekrana yazdırılacağı gendir ve o kromozomda başka gen
ekrana yazılmayacaktır.
Çok büyük dosyaları okuyabilecek şekilde program yazılmalıdır. Programda çöp oluşması puan
kırılmasına neden olur.
Hiçbir şekilde Şablon (Generic) veri yapısı kullanılamaz. Her sınıfın başlık ve kaynak dosyası
ayrı olmalı ve başlık dosyasında metot gövdesi bulunmamalıdır. Hazır veri yapısı
kullanılamaz.
