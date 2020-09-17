
main.o:     file format pe-x86-64


Disassembly of section .text:

0000000000000000 <main>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	48 83 ec 20          	sub    $0x20,%rsp
   8:	e8 00 00 00 00       	callq  d <main+0xd>
   d:	48 8d 15 01 00 00 00 	lea    0x1(%rip),%rdx        # 15 <main+0x15>
  14:	48 8b 0d 00 00 00 00 	mov    0x0(%rip),%rcx        # 1b <main+0x1b>
  1b:	e8 00 00 00 00       	callq  20 <main+0x20>
  20:	ba ba 12 03 00       	mov    $0x312ba,%edx
  25:	48 89 c1             	mov    %rax,%rcx
  28:	e8 00 00 00 00       	callq  2d <main+0x2d>
  2d:	48 8d 15 0a 00 00 00 	lea    0xa(%rip),%rdx        # 3e <main+0x3e>
  34:	48 89 c1             	mov    %rax,%rcx
  37:	e8 00 00 00 00       	callq  3c <main+0x3c>
  3c:	b8 00 00 00 00       	mov    $0x0,%eax
  41:	48 83 c4 20          	add    $0x20,%rsp
  45:	5d                   	pop    %rbp
  46:	c3                   	retq   

0000000000000047 <__tcf_0>:
  47:	55                   	push   %rbp
  48:	48 89 e5             	mov    %rsp,%rbp
  4b:	48 83 ec 20          	sub    $0x20,%rsp
  4f:	48 8d 0d 00 00 00 00 	lea    0x0(%rip),%rcx        # 56 <__tcf_0+0xf>
  56:	e8 00 00 00 00       	callq  5b <__tcf_0+0x14>
  5b:	90                   	nop
  5c:	48 83 c4 20          	add    $0x20,%rsp
  60:	5d                   	pop    %rbp
  61:	c3                   	retq   

0000000000000062 <_Z41__static_initialization_and_destruction_0ii>:
  62:	55                   	push   %rbp
  63:	48 89 e5             	mov    %rsp,%rbp
  66:	48 83 ec 20          	sub    $0x20,%rsp
  6a:	89 4d 10             	mov    %ecx,0x10(%rbp)
  6d:	89 55 18             	mov    %edx,0x18(%rbp)
  70:	83 7d 10 01          	cmpl   $0x1,0x10(%rbp)
  74:	75 21                	jne    97 <_Z41__static_initialization_and_destruction_0ii+0x35>
  76:	81 7d 18 ff ff 00 00 	cmpl   $0xffff,0x18(%rbp)
  7d:	75 18                	jne    97 <_Z41__static_initialization_and_destruction_0ii+0x35>
  7f:	48 8d 0d 00 00 00 00 	lea    0x0(%rip),%rcx        # 86 <_Z41__static_initialization_and_destruction_0ii+0x24>
  86:	e8 00 00 00 00       	callq  8b <_Z41__static_initialization_and_destruction_0ii+0x29>
  8b:	48 8d 0d b5 ff ff ff 	lea    -0x4b(%rip),%rcx        # 47 <__tcf_0>
  92:	e8 00 00 00 00       	callq  97 <_Z41__static_initialization_and_destruction_0ii+0x35>
  97:	90                   	nop
  98:	48 83 c4 20          	add    $0x20,%rsp
  9c:	5d                   	pop    %rbp
  9d:	c3                   	retq   

000000000000009e <_GLOBAL__sub_I_main>:
  9e:	55                   	push   %rbp
  9f:	48 89 e5             	mov    %rsp,%rbp
  a2:	48 83 ec 20          	sub    $0x20,%rsp
  a6:	ba ff ff 00 00       	mov    $0xffff,%edx
  ab:	b9 01 00 00 00       	mov    $0x1,%ecx
  b0:	e8 ad ff ff ff       	callq  62 <_Z41__static_initialization_and_destruction_0ii>
  b5:	90                   	nop
  b6:	48 83 c4 20          	add    $0x20,%rsp
  ba:	5d                   	pop    %rbp
  bb:	c3                   	retq   
  bc:	90                   	nop
  bd:	90                   	nop
  be:	90                   	nop
  bf:	90                   	nop

Disassembly of section .bss:

0000000000000000 <_ZStL8__ioinit>:
	...

Disassembly of section .rdata:

0000000000000000 <_ZStL19piecewise_construct>:
   0:	00 48 65             	add    %cl,0x65(%rax)
   3:	6c                   	insb   (%dx),%es:(%rdi)
   4:	6c                   	insb   (%dx),%es:(%rdi)
   5:	6f                   	outsl  %ds:(%rsi),(%dx)
   6:	20 6d 61             	and    %ch,0x61(%rbp)
   9:	00 32                	add    %dh,(%rdx)
   b:	32 32                	xor    (%rdx),%dh
   d:	32 32                	xor    (%rdx),%dh
   f:	32 0a                	xor    (%rdx),%cl
	...

Disassembly of section .xdata:

0000000000000000 <.xdata>:
   0:	01 08                	add    %ecx,(%rax)
   2:	03 05 08 32 04 03    	add    0x3043208(%rip),%eax        # 3043210 <_GLOBAL__sub_I_main+0x3043172>
   8:	01 50 00             	add    %edx,0x0(%rax)
   b:	00 01                	add    %al,(%rcx)
   d:	08 03                	or     %al,(%rbx)
   f:	05 08 32 04 03       	add    $0x3043208,%eax
  14:	01 50 00             	add    %edx,0x0(%rax)
  17:	00 01                	add    %al,(%rcx)
  19:	08 03                	or     %al,(%rbx)
  1b:	05 08 32 04 03       	add    $0x3043208,%eax
  20:	01 50 00             	add    %edx,0x0(%rax)
  23:	00 01                	add    %al,(%rcx)
  25:	08 03                	or     %al,(%rbx)
  27:	05 08 32 04 03       	add    $0x3043208,%eax
  2c:	01 50 00             	add    %edx,0x0(%rax)
	...

Disassembly of section .pdata:

0000000000000000 <.pdata>:
   0:	00 00                	add    %al,(%rax)
   2:	00 00                	add    %al,(%rax)
   4:	47 00 00             	rex.RXB add %r8b,(%r8)
   7:	00 00                	add    %al,(%rax)
   9:	00 00                	add    %al,(%rax)
   b:	00 47 00             	add    %al,0x0(%rdi)
   e:	00 00                	add    %al,(%rax)
  10:	62                   	(bad)  
  11:	00 00                	add    %al,(%rax)
  13:	00 0c 00             	add    %cl,(%rax,%rax,1)
  16:	00 00                	add    %al,(%rax)
  18:	62                   	(bad)  
  19:	00 00                	add    %al,(%rax)
  1b:	00 9e 00 00 00 18    	add    %bl,0x18000000(%rsi)
  21:	00 00                	add    %al,(%rax)
  23:	00 9e 00 00 00 bc    	add    %bl,-0x44000000(%rsi)
  29:	00 00                	add    %al,(%rax)
  2b:	00 24 00             	add    %ah,(%rax,%rax,1)
	...

Disassembly of section .ctors:

0000000000000000 <.ctors>:
   0:	9e                   	sahf   
   1:	00 00                	add    %al,(%rax)
   3:	00 00                	add    %al,(%rax)
   5:	00 00                	add    %al,(%rax)
	...

Disassembly of section .rdata$zzz:

0000000000000000 <.rdata$zzz>:
   0:	47                   	rex.RXB
   1:	43                   	rex.XB
   2:	43 3a 20             	rex.XB cmp (%r8),%spl
   5:	28 47 4e             	sub    %al,0x4e(%rdi)
   8:	55                   	push   %rbp
   9:	29 20                	sub    %esp,(%rax)
   b:	39 2e                	cmp    %ebp,(%rsi)
   d:	32 2e                	xor    (%rsi),%ch
   f:	30 00                	xor    %al,(%rax)
	...

Disassembly of section .rdata$.refptr._ZSt4cout:

0000000000000000 <.refptr._ZSt4cout>:
	...
