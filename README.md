Проект модернизации автоматизированной системы диспетчерского управления подстанции.
=======
Курганский Государственный Университет
-------

Основными тенденциями диспетчерского управления энергообъектами является все большая степень интеграции. Региональное диспетчерское управление  (РДУ) области выполняет следующие основные технологические функции:
– непрерывное (круглосуточное), централизованное оперативно-технологическое (диспетчерское) управление работой объектов диспетчерского управления;
– принятие мер по обеспечению сбалансированности потребления и нагрузки электростанций с учетом внешних перетоков региональной энергосистемы;
– осуществление краткосрочного планирования за счет расчета балансов электрической энергии и мощности объектов оперативно-технологического (диспетчерского) управления  региональной энергосистемы.

Оперативно-информационная подсистема (ОИП), используемая в РДУ, представляет собой программно-аппаратный комплекс и выполнена в сетевой распределенной архитектуре. Она может работать как на одиночном сервере, так и в виде сложных распределенных многомашинных комплексов. Клиенты, пользующиеся информацией подсистемы, работают на отдельных рабочих станциях и могут подключатся к серверам комплекса при помощи вычислительных сетей различного рода.

Технологическая информация с энергообъектов  (перетоки энергии, напряжение, ток, частота, температура) области поступает в РДУ по различным каналам связи. Специальное программное обеспечение производит обработку по алгоритмам, анализируя текущую ситуацию в единой энергосистеме, моделируя развитие и прогнозируя потребление электроэнергии. Телеметрическая информация сохраняется в базе данных, выводится на диспетчерские видеосистемы и ретранслируется в соседние диспетчерские управления.

Диспетчер контролирует энергообъекты и вносит корректировки, необходимые для поддержания заданного режима, не допуская аварийных режимов работы. Для связи с энрегообъектами и передачи корректировок диспетчер использует телефонную связь, что не соответствует современным требованиям АСКУЭ-систем. В связи с этим было решено модернизировать систему сбора и передачи данных, что и было реализовано в процессе работы.

Модернизация системы сбора и передачи информации имеет преимущества удаленного управления энергообъектами:
- обеспечение обратной связи с энергообъектами введением управляющих сигналов;
- повышение эффективности управления подстанцией с целью ведения заданного режима; 
- получение качественной оперативной информации на соответствующих автоматизированных рабочих местах;
- обеспечение возможности подробного ретроспективного анализа режимов работы основного электрооборудования.

В процессе работы написано приложение по управлению параметрами подстанции. Разработка приложения ведется на языке программирования С++ в среде разработки QT Creator, для построения графического интерфейса используются компоненты QT. Выбор фреймворка QT позволил создать приложение, отвечающее современным требованиям программного обеспечения.
Основное окно программы содержит стандартные элементы, необходимые элементы отображения и ввода информации, позволяющие диспетчеру производить корректировку режима работы:
– переключать тип управления подстанции;
– переключать управляемую секцию подстанции;
– плавно изменять напряжение автотрансформаторов;
– производить планирование переключений.
Приложение интегрируется с существующей АСКУЭ-системой (автоматизированная система контроля и учёта энергоресурсов) на базе ОИК СК-2007, предоставляя диспетчеру привычный интерфейс.
![alt text](http://i.imgur.com/znIIQgb.png "Программа контроля параметров подстанации ProDispatcher")

Локальная система управления напряжением и контролем коммутации шинных переключателей подстанции до модернизации не имела возможность удаленного управления, однако, серьезных технических преград для этого не существовало.
Центральным структурным звеном телемеханики подстанции является шкаф телемеханики КП “Исеть”, собирающий технологическую информацию с установленных измерительных преобразователей и передающий ее по каналам связи в РДУ. Шкаф КП “Исеть” имеет возможность принимать сигналы телеуправления, но не имеет возможности это управление реализовать. В проекте разработан шкаф управления на базе контроллера Овен ПЛК-110 и микропроцессорного регулятора РНМ-1, необходимые электрические принципиальные схемы  и схемы подключений.
Разработанные алгоритмы управления реализуют связь с объектом управления по протоколу Modbus TCP (по каналам Ethernet, TCP/IP), предоставляя возможности для удаленного переключения типа управления, измнения контролируемой секции, прибавления и убавления напряжения обмотки автотрансформаторов.
В алгоритмах управления важными объектами, такими как подстанция, важно предусмотреть обработку ошибок. Алгоритмом предусмотрена обработка различных исключающих ситуаций: ввод некорректных данных, отсутствие канала связи и другие. Также алгоритмом обеспечено протоколирование всех действий, выполняемых диспетчером.
Модернизация диспетчерского управления в представленном проекте идет вместе с современными тенденциями развития диспетчерского управления – все большей степени интеграции. Текущая модернизация позволила повысить эффективность оперативного управления введением управляющих сигналов до подстанции.
