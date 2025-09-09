# STM32F4-Discovery — Embedded C WorkSpace

Bu depo, staj dönemimde **STM32F4-Discovery** kartı üzerinde **STM32CubeIDE** kullanarak yaptığım **Embedded C temelleri** ve gömülü yazılım denemelerini içerir.  
Amaç; C dilinin gömülü sistemlerde nasıl kullanıldığını, temel yapıların (değişkenler, pointer’lar, struct, union, bit işlemleri, koşullar, döngüler, bellek hizalama vb.) STM32 ortamında nasıl çalıştığını adım adım göstermektir.  

---

## Hızlı Başlangıç

- **Kart:** STM32F4-Discovery (STM32F407VG)
- <img width="315" height="236" alt="image" src="https://github.com/user-attachments/assets/bbdda946-06f9-4fc7-a363-b9bf502d79b0" />
- **IDE:** STM32CubeIDE  
- **Dil:** Embedded C (bare-metal yaklaşım)  
- **Programlayıcı:** On-board ST-Link/V2  

### Derleme & Çalıştırma
1. İlgili klasörü CubeIDE’ye `Import → Existing Projects` ile ekleyin.  
2. `Build Project` diyerek derleyin.  
3. Debug/Run ile STM32F4-Discovery kartına yükleyin.  

> Her klasör kendi `main.c` dosyasına sahiptir ve bağımsız örnektir.  

---

## Proje Dizini (Sıralı)

> Klasörler C dilinin farklı özelliklerini ve gömülü sistemlerdeki karşılığını gösterecek şekilde hazırlanmıştır.  

### 000–015: C Temelleri + GPIO
- **000TestProject** – İlk CubeIDE test projesi.  
- **001HelloWorld** – Konsol/temel çıktı.  
- **002Sizeof** – `sizeof()` operatörü kullanımı.  
- **003Add** – Basit toplama işlemi.  
- **004float** – Float değişkenlerle çalışma.  
- **005led_toggle** – GPIO LED toggle.  
- **006pin_read** – GPIO pin okuma.  
- **007Aligned** – Bellek hizalama denemesi.  
- **009Typedef** – `typedef` ile tanımlamalar.  
- **010_led_toggle_bitfields** – Bitfield ile LED kontrolü.  
- **011_keypad / 012_Keypad_ex2** – Tuş takımı okuma örnekleri.  
- **013_Char / 014_Char_test** – Karakter ve ASCII çalışmaları.  
- **015_led_Toggle_Macros** – Makrolarla LED kontrolü.  

### Arrays, Char ve Pointer Çalışmaları
- **Array_passing_ex1 / Arrays_ex1–ex3 / Array_swap** – Diziler üzerinde işlemler, fonksiyona parametre geçişi.  
- **Char_ex1 / Char_ex2 / Char_ramRom / Char_sizeof** – Karakter türleri, RAM/ROM farkı, boyut denemeleri.  
- **ConstAndPointer / Const_ex1 / Const_ex2** – `const` kullanımı, pointer ile birlikte kullanımı.  
- **Pointer2 / Pointer3 / pointers** – Pointer temelleri ve uygulamaları.  

### Operatörler ve Koşullar
- **Ex1_BitShifting** – Bit kaydırma işlemleri.  
- **ForEvenNumbers / ForPyramid_ex1** – Döngü örnekleri.  
- **conditional / elseIfExercise / switchCase** – Koşullu ifadeler.  
- **bitwiseAndOr** – Bitwise işlemler.  

### Yapılar ve Bellek
- **StructPadding / Struct_ex1–ex5** – Struct kullanımı, padding farkları.  
- **StructuresAndPointers / StructuresAndPointers2** – Yapılar ve pointer’lar.  
- **UnionBitExtraction / Unions_ex1** – Union ve bit alanı kullanımı.  
- **sataAliggnment / struct_union_farki** – Struct vs Union farkı.  
- **volatile** – `volatile` anahtar kelimesinin kullanımı.  

### Döngüler, Fonksiyonlar ve Makrolar
- **Macro_ex1** – Makro örnekleri.  
- **Whileto10 / Whileto10_ex2 / WhileEvenNumbers_ex3–ex5** – While döngüsü ile sayma örnekleri.  
- **average** – Ortalama hesaplama.  

### Assembly Entegrasyonu
- **p2_Startup / p2_T_bit / p2_accessLevel / p2_specialReg** – Assembly ile özel register erişimi.  
- **p2_assembly_add / move / specialReg** – Assembly inline örnekleri.  
- **part2_helloWorld** – Assembly destekli Hello World.  

### Ekstra Denemeler
- **floatCharge** – Float işleme.  
- **testingOfBits / testingOfBits2** – Bit testleri.  
- **unAligned** – Bellek hizasız erişim.  
- **ascii / ascii2** – ASCII tablo denemeleri.  

---

