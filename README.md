# CS232: Computer Organizations
[Pace University](http://www.pace.edu)

Course Staff
* Instructor: [Dr. Jun Yuan](http://csis.pace.edu/~jyuan2/)
* Teaching Assistant: [Jack Egan](mailto:je19513n@pace.edu)

**The content of this course changes as technology evolves**, to keep up to date with changes [follow me on GitHub](https://github.com/jyuan2pace/CS232S21).

* Section 24480 Spring 2022
* Lecture: Monday & Wednesday, 3:30 PM, [Lecture Zoom Link](https://pace.zoom.us/j/6313313504?pwd=bUJtV3NUUlBiZVNKTThTRHBoMi84Zz09) 
* Recitation: Friday, 2:00 PM, [Recitation Zoom Link](https://pace.zoom.us/j/99718900621?pwd=QXM2VE5QYmY4YkVPN1RNNG5mWnp6Zz09) 
* Make an appointment with course staff: [Scheduling Jun's office hours](https://slotted.co/junsofficehoursf2021) or [Scheduling TA's office hours](https://slotted.co/jackofficehour2022s)
* You will be using [Gradescope](https://www.gradescope.com/) submit your assignments, Please join via the entry code Entry Code:3YV25J. 

# Course Description

This course facilitates the development of a deep understanding of the hardware environment of computing devices and the interface it provides to the associated software. Students need to understand computer organization to develop software artifacts that can achieve high performance through their awareness of concurrency, consistency, parallelism, and latency. They will acquire an understanding and appreciation of a computer system’s characteristics, performance, interactions, and functional components as well as the challenge of harnessing parallelism to sustain performance improvements. In selecting a system to use, students will be able to understand the tradeoff among various components, such as CPU clock speed, cycles per instruction, memory size, average memory access time, pipelining, vector processing, and multiprocessors, and multicomputers.

# Textbook

* [**Required**] [DIS] Dive into Systems https://diveintosystems.org/
* [**Recommended**] [CSAPP] Computer Systems: A Programmer's Perspective (2nd Edition) (ISBN-10: 0136108040)
* [**Recommended**] [CPABG] C Programming: Absolute Beginner's Guide, 3rd ed., Aug 2013, (ISBN 978-0789751980)
* [**Recommended**] [TECS] The Elements of Computing Systems: Building a Modern Computer from First Principles (ISBN:9780262640688)

# Objectives

* Demonstrate how to convert numerical data from one format to another.
* Discuss the many equivalent representations of computer functionality, including logical expressions and gates, and use mathematical expressions to describe the functions of simple combinational and sequential circuits.
* Design the basic building blocks of a computer: arithmetic-logic unit (gate-level), registers (gate-level), central processing unit (register transfer-level), and memory (register transfer-level).
* Write and analyze Assembly language program segments.
* Explain why instruction set architecture and stored program concepts are important design principles.
* Describe and show the relative utility of how negative integers are stored in sign-magnitude and two's-complement representations.
* Explain how fixed-and floating-point number representations affect accuracy and precision.
* Understand the basic concepts of interrupts/exceptions and explain how interrupts are used to implement I/O control and data transfers.
* Describe instruction-level and data-level parallelisms, and pipeline hazards and how they are managed.
* Explain how instructions are represented at both the machine and the Assembly language levels.
* Identify and discuss the main types of memory technology (e.g., SRAM, DRAM, flash, and magnetic disk) and their relative costs and performance.
* Analyze and describe how the use of memory hierarchy (e.g., cache, main memory, and virtual memory) is used to reduce effective memory latency.
* Understand how a program’s locality of reference property supports memory hierarchy design.

# Syllabus
This syllabus presents the expected class schedule, due dates, and reading assignments. [Check current syllabus](https://docs.google.com/document/d/1tY0xz3trLsnmk1nJAKJzn5bmLSZ_j0fctNJq0pij0oo/edit?usp=sharing). Check this page often for the most up-to-date schedule.

# Live Schedule
Week|Content|Recording|Reading|Recitation|Deadline
---|---|---|---|---|---
Slides: [1-1](https://docs.google.com/presentation/d/1X5rzupXoHWVoWpC2XZCbbmy0O5AmgOojFrUEjJ0ctZE/edit?usp=sharing), [1-2](https://docs.google.com/presentation/d/1uFlCkQuElGE7tZ6Rc8n5o6KZxNuyXoPHjc0rRZsMjis/edit?usp=sharing)<br>First class on 01/24/2022| **Week 1: Course Intro and Logistics** <ul><li>Part 1.1: Course Overview<li>Part 1.2: Admin and Logistics <li>Part 1.3: Intro to binaries <li>Part 1.4: 2's complements <li>Part 1.5: Number systems and number conversion</ul> |<ul><li>[1-1 Course Overview & Logistics](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=2070e53f-8e3c-4adc-a74c-ae290125c2e9) <li>[1-2 Intro to binaries and number systems](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=6212a604-641f-4177-8f06-ae2a0019b730) <li>[1-3 Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=f0542275-9c4b-45ac-9ce5-ae2b0157f2df)</ul>|<ul> <li> [Syllabus](https://docs.google.com/document/d/1tY0xz3trLsnmk1nJAKJzn5bmLSZ_j0fctNJq0pij0oo/edit?usp=sharing) <li>[Chapter 4 through 4.4.1](https://diveintosystems.org/singlepage/#_binary_and_data_representation) </ul>| [Problems](https://docs.google.com/document/d/1hlvTQsoCmB3ErDjWcwicJHDQbfr0NtH8hGALLUAmzP4/edit?usp=sharing) | None
Slides: [Week 2](https://docs.google.com/presentation/d/1yGjgLfGiuos4kI0qIr0tgvyBC0jmDA-K98YP8CBTALo/edit?usp=sharing) demo: [repl](https://replit.com/join/beundphlhm-junyuan2)<br>Week of 01/31/2022 | **Week 2: Toward C** <ul><li>	Part 2.1: IO and Compilation <li>Part 2.2: C types and Declaration <li>Part 2.3: Conditionals and Loops<li>Part 2.4: Functions <li>Part 2.5: Arrays and strings</ul> |<ul><li>[2-1. Wrapping up overflow and moving to C](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=564bdb62-1d03-4431-a9af-ae2f00291aec) <li> [2-2. C types, sizes and chars](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=196e00e6-3a4e-47c2-8b0b-ae3100530e14) <li> [2-3. Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=d6107658-f9f9-46c4-93a4-ae32016aace5) </ul>|<ul> <li>[Chapter 1 through 1.6](https://diveintosystems.org/singlepage/#_by_the_c_by_the_c_by_the_beautiful_c) </ul>|[C Exercises](https://docs.google.com/document/d/12Gu9S2vv4zO8jodHZoiNQJpzNLYf-phBOm8H_Uaq7Rg/edit?usp=sharing)  | <ul><li>Assignment#1 due 02/06/2022 <li> [Assignment#2](https://docs.google.com/document/d/1LLdGeYY5mjy_JS8WO5phAKSk1DzdpKyODTSp7bciUfo/edit?usp=sharing) is out, due 02/13/2022 </ul>
[Week 3](https://docs.google.com/presentation/d/1o0SkO9OIf5hQc6rMf2fD0WI26aJ1ucMqgZaYY3_Jb3M/edit?usp=sharing)<br>Week of 02/07/2022 | **Week 3: Deep Dive into C** <ul><li>	Part 3.1: Pointers and functions <li>Part 3.2: Dynamic Memory Allocation <li>Part 3.3: GDB debugging</ul> |<ul><li>[3-1. dive into C pointers](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=cf76e90c-0906-46b8-b525-ae3600464630) <li> [3-2. More pointers and dynamic memory](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=f7914c6d-7708-4489-9c73-ae38012cd4ed) <li> [3-3. Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=19029100-0145-4841-b543-ae39016ac4c8) </ul>|<ul> <li>[Chapter 2 through 2.5](https://diveintosystems.org/antora/diveintosystems/1.0/C_depth/index.html) <li>[Chapter 3.1 gdb](https://diveintosystems.org/singlepage/#_debugging_with_gdb)</ul>|[Scope & C pointers](https://docs.google.com/document/d/1SE4gPBtIcPd6UdCxmXSCy6ySbkMJuT56KOH2ZP28Y7A/edit?usp=sharing)  | <ul><li> [Assignment#3](https://docs.google.com/document/d/15Z7hWvDVP7zBUTnwcE472bg2a2_xSATufmR7QYfJJns/edit?usp=sharing) is out, due 02/20/2022 <li>Assignment#2 due 02/13/2022 </ul>
[Week 4](https://kami.app/T0vE6O6pVCRx)<br>Week of 02/14/2022 | **Week 4: C arrays, structs and strings**  <ul><li>	Part 4.1: Strings and arrays <li>Part 4.2: Structs <li>Part 4.3: Dynamic Memory Allocation </ul> |<ul><li>[4-1.C strings, arrays and structs](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=19fc5f53-6939-4d7b-a7ae-ae3d001202bd) <li> [4-2. Memory layout and more pointer exercises](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=1925e38a-8009-44c5-929c-ae3f01136954) <li> [4-3. Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=209d925f-e8ff-400a-ae08-ae40016aafdd)| <ul> <li>[Chapter 2.5 through 2.7](https://diveintosystems.org/antora/diveintosystems/1.0/C_depth/index.html)<li>[Chapter 3.3 Valgrind](https://diveintosystems.org/antora/diveintosystems/1.0/C_debug/valgrind.html)</ul>|[C pointers and meomory management](https://docs.google.com/document/d/1VnHSKFIKskJaz3wd9FjwsNZCWT2ZRytYkMh3nyY0icQ/edit?usp=sharing)  | <ul><li>Assignment#3 due 02/20/2022 </ul>
[Week 5]()<br>Week of 02/22/2021 | **Week 5: Advanced C**  <ul><li>	Part 5.1: Little Endian <li>Part 5.2: C library <li>Part 5.3: Study case of vector <li>Part 5.4:Floating point representation</ul> |<ul><li>[5-1.big eandian vs little endian and memory layout](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=a80c69e8-94fe-4040-9ab5-ae460009bc99) <li> [5-2. Memory](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=a69915c0-b8d3-4583-9846-ae4800032986) <li> [5-3. Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=622c2383-9253-4c77-8311-ae47017d47e9)| <ul> <li>[Chapter 2.8 through 2.9](https://diveintosystems.org/antora/diveintosystems/1.0/C_depth/IO.html)<li>[Chapter 4.7 through 4.8](https://diveintosystems.org/antora/diveintosystems/1.0/Binary/byte_order.html)</ul>|[Trace your code in memory](https://docs.google.com/document/d/1t8WpPg0symO4YQNFuR2_vsoT_ZmDqrhbXbx9adVXnsQ/edit?usp=sharing)  | <ul><li>[Assignment#4](https://docs.google.com/document/d/1HpDdK32pnuTuW_J440C-XrwioRhYchbyKKWKjUFOrrY/edit?usp=sharing) due 03/06/2022, early bonus by 02/27/2022 </ul>  
Week 6 [Study guide](https://docs.google.com/document/d/1jHarJHbavJ6ijpjdW9Ik0olxJWBdeL3XjbTCnjT7ChA/edit?usp=sharing)<br>Week of 02/28/2022 | **Week 6: C wrap up**  <ul><li>	Part 6.1: Shared objects <li>Part 6.2: Floating point numbers <li>Part 6.3: Review </ul> |<ul><li>[6-1.Shared libraries wrap-up and floating point](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=022b512b-19bd-4e6f-a40f-ae4b0041ab8e) <li> [6-2. Review and intro to logic gates, TBD]() <li> [6-3. Recitation, TBD]() </ul>|<ul><li>  [Chapter 5.1 through 5.4](https://diveintosystems.org/antora/diveintosystems/1.0/Arch/index.html)<li> [Chapter 4.8](https://diveintosystems.org/antora/diveintosystems/1.0/Binary/floating_point.html)</ul>|[No new exercises/submission, review time]()  | <ul><li>[Assignment#4](https://docs.google.com/document/d/1HpDdK32pnuTuW_J440C-XrwioRhYchbyKKWKjUFOrrY/edit?usp=sharing) due 03/06/2022</ul>   
 <!--
[Week 7](https://docs.google.com/presentation/d/1U-k2dnh1etsfGuuT7MWK9GBM8Dv-D4s_OVPRsEpvXk8/edit?usp=sharing)<br>Week of 03/08/2021 | **Week 7: Intro to computer architecture and midterm**  <ul><li>	Part 7.1: Intro to computer architecture <li>Part 7.2: Midterm review <li>Part 7.3: Midterm exam in class</ul> |<ul><li>[7-1.Intro to computer architecture and midterm](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=45631ea9-eef6-424e-b6f8-ace600033a1c) <li> [7-2. Midterm Exam in-class]() <li> [7-3. Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=63455542-bbaf-42ec-84f7-ace9014bc9e8) </ul>|<ul><li>  [Chapter 5.1 through 5.4](https://diveintosystems.org/antora/diveintosystems/1.0/Arch/index.html)</ul>|<ul><li>[Recitation#7 slides](https://github.com/jyuan2pace/CS232S21/blob/main/demo/week7/Recitation%237%20slides.pdf) <li> [Struct and pointer exercises: Linked List](https://docs.google.com/document/d/1WR_ubDZ-GQG6gjiRXZZcowiOkSnKdW_QM0zpex0SazY/edit?usp=sharing) <li> [Iris's solution](https://github.com/jyuan2pace/CS232S21/blob/main/demo/week7/ll_cycle_solution.c) </ul>  | <ul> <li>[Bonus assignment](https://docs.google.com/document/d/1bqwQryrkLXh3WGXiLZ7CdpFYPpPQt8d4ZuOhLg_d24U/edit?usp=sharing) due 03/14</ul>  
[Week 8](https://docs.google.com/presentation/d/13rmlQeRCrHQ4rgH5SlNTRqA6SkNtKWcqAh1k7V3ePWs/edit?usp=sharing)<br>Week of 03/15/2021 | **Week 8: Combinational Logic Gates**  <ul><li>	Part 8.1: Midterm Retrospection <li>Part 8.2: Logic gates review <li>Part 8.3: Adders <li> Part 8.4: Mux/DeMux </ul> |<ul><li>[8-1. Digital logic gates and nand game](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=9c56d114-302d-4bec-acd1-acec018347e0) <li> [8-2. Arithmetic logic gates](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=94b50d66-196b-4830-8f81-acee017a997f) <li> [8-3. Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=e194b529-78e9-49db-90dc-acf0016631f2) </ul>|<ul><li>  [Chapter 5.1 through 5.4](https://diveintosystems.org/antora/diveintosystems/1.0/Arch/index.html) <li>  [TECS] Chapter 2 </ul>|<ul> <li> [More linked list interview exercises](https://docs.google.com/document/d/1CroB9fiz8VL4Mg3-Ga9rvAG_aa9sHWyL_gvhX9-bhnk/edit) <li>[Iris's solution](https://github.com/jyuan2pace/CS232S21/blob/main/demo/list_solution.c)</ul>  | <ul> <li>[Assignment 5](https://docs.google.com/document/d/1m6qtW2PV-Lqdh4h5kSLSmgcA3Go4r-2eXvce9AJciFU/edit?usp=sharing) due noon 03/22</ul> 
[Week 9]()<br>Week of 03/22/2021 | **Week 9: Combinational Logic Gates to ALU**  <ul><li>	Part 9.1: Selector and Switch <li>Part 9.2: Expanding 2-way 1-bit selector to Multi-way Multi-bit selector <li>Part 9.3: Unary ALU <li> Part 9.4: ALU </ul> |<ul><li>[9-1. Multi-bit Multi-way Mux](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=4b7f6ae0-5da5-4790-b760-acf4004f5dac) <li> [9-2. ALU ALU ALU](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=520bd91f-84bb-4de8-b047-acf501843ae2) <li> [9-3. Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=07594ecf-4c7a-4af3-bfa6-acf70147907c) </ul>|<ul><li>  [TECS] Chapter 2-3 </ul>|<ul> <li> [Mux Application](https://docs.google.com/document/d/174UR4qilFQC3Xyt3ezNvitQ9mo_Eah0uOWhNenzYg9E/edit?usp=sharing) </ul>  | <ul> <li>[Assignment 6](https://docs.google.com/document/d/1Jp_M_JVdQdCSn-51lMWwJzWwgO0omSz4-mM7L5J7DgU/edit?usp=sharing) due noon 04/05</ul>
[Week 10](https://kami.app/ts3HSqSxoUpa)<br>Week of 03/29/2021 | **Week 10: Sequential logic gates to RAM**  <ul><li>	Part 10.1: Wrap up ALU <li>Part 10.2: Flip-lops, latches and clocks <li>Part 10.3: Registers <li> Part 10.4: Memory <li> Part 10.5: Program Counter </ul> |<ul><li>[10-1. ALU opcode and intro to latch](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=fac0186b-5c45-46de-8b5d-acfa017bd384) <li> [10-2. RAM](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=536dfa13-651e-47aa-8469-acfc01774c98) <li> [10-3. Recitation]() </ul>|<ul><li>  [TECS] Chapter 3 </ul>|<ul> <li> [Mini ALU](https://docs.google.com/document/d/1y_q6pmYXOOxIUwrQD-Wb5WClidf60E_vuo4kuYVhb6I/edit?usp=sharing) </ul>  | <ul> <li>[Assignment 6](https://docs.google.com/document/d/1Jp_M_JVdQdCSn-51lMWwJzWwgO0omSz4-mM7L5J7DgU/edit?usp=sharing) due noon 04/05</ul> 
[Week 11](https://docs.google.com/presentation/d/1TPl1UB28zvQ6WPBDMqffpt83IHeHhf7wEDXcbsnFK5U/edit?usp=sharing)<br>Week of 04/05/2021 | **Week 11: Computer Archtecture and machine code**  <ul><li>	Part 11.1: Wrap up RAM <li>Part 11.2: Revisit computer arch <li>Part 11.3: Intro to machine code <li> Part 11.4: Memory hierarchy<li> Part 11.5: Assembly </ul> |<ul><li>[11-1. Machine code and computer arch_1](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=8ea98f09-8b66-475a-9324-ad010186f3a7) <li> [11-2. Machine code and computer arch_2](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=1ba0f744-9f20-4ac5-998a-ad03017fb720) <li> [11-3. Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=5183df96-ffe3-421f-baf7-ad05013a4da8) </ul>|<ul><li>  [TECS] Chapter 4 </ul>|<ul> <li> [Von neumann model exercise](https://docs.google.com/document/d/1R8CU5QMbi-svEOYwb8nS9DAuf9DhWIG3ev124u_RQgU/edit?usp=sharing) </ul>  | <ul> <li>[Assignment 7](https://docs.google.com/document/d/1rfpLvuJe7vX4p2c4EGqYuW-wgduf8CMGrcGKS8jyZaA/edit?usp=sharing) due noon 04/12</ul> 
Week 12<ul><li>[Slides 1](https://docs.google.com/presentation/d/1FfVJA0TwvQbN5w2igKYMSPt_vBIo5Rlrju6BXiRCsGI/edit?usp=sharing)<li>[slides 2](https://drive.google.com/file/d/1bcmHF5ZLZwNeEz3fjdz0xWhDxXzV9WCQ/view?usp=sharing)</ul><br>Week of 04/12/2021 | **Week 12: Intro to X86**  <ul><li>	Part 12.1: CPU controller <li>Part 12.2: Intro to X86 <li>Part 12.3: Function call convention <li> Part 12.4: Condition and jump <li> Part 12.5 Arrays and Structs </ul> |<ul><li>[12-1. Wrap-up CPU and intro to X86](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=6e39a61b-9f22-4ceb-b078-ad080176c179) <li> [12-2. X86 assembly_1](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=17f599d3-b276-4524-b02a-ad0b00023e4c) <li> [12-3. Recitation](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=2ae0f4a6-0500-40d7-8825-ad0c0147a73b) </ul>|<ul><li>  [Chapter 8](https://diveintosystems.org/antora/diveintosystems/1.0/IA32/index.html)   </ul>|<ul> <li> [X86 Arithmetic and data movement](https://docs.google.com/document/d/1KZ4Nf7hXds05sEOkfMFVfN9C2egRAovWw4-RNkAdkxw/edit?usp=sharing) </ul>  | <ul> <li>[assignment 8](https://docs.google.com/document/d/1_DiyTH6LnAMUao-_dKAKVZyYwGWdocCWgORCnXOmuBk/edit?usp=sharing) is out, due noon 04/26/2021 <li>[Bonus assignment 2](https://drive.google.com/file/d/1WX_CTT22yQH2QtCiEiFo1XbQdsGqnhkO/view?usp=sharing) is out, due end of the semester</ul> 
 Week 13<ul><li>[Slides 1](https://kami.app/b1a-xSR-VLB)<li>[slides 2](https://kami.app/6jh-D6r-c3c)</ul><br>Week of 04/19/2021 | **Week 13: X86: Control Flow and Function Convention**  <ul><li>	Part 13.1: Direct and indirect addressing mode <li>Part 13.2: Control flow <li>Part 13.3: Stack <li> Part 13.4: Function Convention and Stack </ul> |<ul><li>[13-1. X86 Control flow and Array](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=c9ff0c77-df4a-4be7-8e55-ad0f0178fe52) <li> [13-2. X86 Function Conventions](https://pace.hosted.panopto.com/Panopto/Pages/Viewer.aspx?id=b167acc8-0645-49d7-9220-ad110186e0bd)</ul>|<ul><li>  [Chapter 8](https://diveintosystems.org/antora/diveintosystems/1.0/IA32/index.html)   </ul>|<ul> <li> No recitation </ul>  | <ul> <li>[assignment 8](https://docs.google.com/document/d/1_DiyTH6LnAMUao-_dKAKVZyYwGWdocCWgORCnXOmuBk/edit?usp=sharing) due noon 04/26/2021 <li>[Bonus assignment 2](https://drive.google.com/file/d/1WX_CTT22yQH2QtCiEiFo1XbQdsGqnhkO/view?usp=sharing) is out, due end of the semester</ul> 
test-->
# Hands-out



