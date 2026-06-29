<h2><a href="https://codeforces.com/contest/2094/problem/B" target="_blank" rel="noopener noreferrer">2094B — Bobritto Bandito</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2094B](https://codeforces.com/contest/2094/problem/B) |

## Topics
`brute force` `constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">B. Bobritto Bandito</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>In Bobritto Bandito's home town of residence, there are an infinite number of houses on an infinite number line, with houses at $$$\ldots, -2, -1, 0, 1, 2, \ldots$$$. On day $$$0$$$, he started a plague by giving an infection to the unfortunate residents of house $$$0$$$. Each succeeding day, the plague spreads to <span class="tex-font-style-bf">exactly one</span> healthy household that is next to an infected household. It can be shown that each day the infected houses form a continuous segment.</p><p>Let the segment starting at the $$$l$$$-th house and ending at the $$$r$$$-th house be denoted as $$$[l, r]$$$. You know that after $$$n$$$ days, the segment $$$[l, r]$$$ became infected. Find any such segment $$$[l', r']$$$ that could have been infected on the $$$m$$$-th day ($$$m \le n$$$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 100$$$) – the number of independent test cases.</p><p>The only line of each test case contains four integers $$$n$$$, $$$m$$$, $$$l$$$, and $$$r$$$ ($$$1 \leq m\leq n \leq 2000, -n \leq l \leq 0 \leq r \leq n, r-l=n$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output two integers $$$l'$$$ and $$$r'$$$ on a new line. If there are multiple solutions, output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005809105166066609" id="id00527280175799531" class="input-output-copier">Copy</div></div><pre id="id005809105166066609"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4 2 -2 2</div><div class="test-example-line test-example-line-even test-example-line-2">4 1 0 4</div><div class="test-example-line test-example-line-odd test-example-line-3">3 3 -1 2</div><div class="test-example-line test-example-line-even test-example-line-4">9 8 -6 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048105937573977275" id="id009970967819225887" class="input-output-copier">Copy</div></div><pre id="id0048105937573977275">-1 1
0 1
-1 2
-5 3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, it is possible that on the $$$1$$$-st, $$$2$$$-nd, and $$$3$$$-rd days the interval of houses affected is $$$[-1,0]$$$, $$$[-1,1]$$$, $$$[-2,1]$$$. Therefore, $$$[-1,1]$$$ is a valid output.</p></div>