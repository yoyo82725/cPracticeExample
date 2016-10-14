<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<!--css-->
<!--<link rel="stylesheet" type="text/css" href="css/style1.css"/>-->
<style type='text/css'>
body{
	word-wrap:break-word;
	background:#F8F8F8;
}
.codeEq{
	border-bottom:1px dashed #999;
}
</style>
<!--JQ-->
<script type="text/javascript" src="js/jquery-1.7.2.js" ></script>
<script type='text/javascript'>
$(document).ready(function(){
	var a,b;
	//程式碼虛線變色
	$('.codeEq').mouseenter(function(){//移入
		$(this).css('color','#369');
		$(this).css('background','#FFF');
	}).mouseleave(function(){//移出
		$(this).css('color','#000');
		$(this).css('background','#F8F8F8');
	});
	//改字體大小
	$('.FontSize').click(function(){
		a=$(this).attr('name');
		switch(parseInt(a)){
			case 2:
				b='16px';
				break;
			case 3:
				b='18px';
				break;
			case 4:
				b='20px';
				break;
			case 5:
				b='22px';
				break;
			case 6:
				b='24px';
				break;
			default:
				b='';
		}
		$('#MainFrame').css('font-size',b);
	});
});
</script>
</head>

<body>
<h3>上課例題&作業</h3>
字體大小：
<input type='button' value='預設' name='1' class='FontSize'/>
<input type='button' value='16px' name='2' class='FontSize'/>
<input type='button' value='18px' name='3' class='FontSize'/>
<input type='button' value='20px' name='4' class='FontSize'/>
<input type='button' value='22px' name='5' class='FontSize'/>
<input type='button' value='24px' name='6' class='FontSize'/>
<div id='MainFrame'>
<?
	//上方超連結
	$file=fopen('example.txt','r');//選項檔
	echo'<p>&nbsp&nbsp';
	for($i=1;$str=fgets($file);$i++){//顯示所有檔案
		echo"<a href='index.php?f={$str}'>{$str}</a>&nbsp&nbsp";	
		/*if($i%5==0)//換行
			echo'<br/>';*/
	}
	echo'</p>';
	$f=$_GET['f'];//從網址抓檔案
	if(!$f){//無選擇就抓最新的
		$file=fopen('example.txt','r');//選項檔
		while($str=fgets($file)){
			$f=$str;
		}
	}
	if(@fopen("code/{$f}.c",'r')){//有無檔案
		fclose($file);
		//程式碼
		echo'<p><b>程式碼&nbsp'.$f.'</b>&nbsp<span style="color:#999;">(滑鼠停留在上會有說明)</span></p>
		<div style="border:1px solid #000; background:#F7F7F7;">
			<code>';
		$count=0;//編號
		$file=fopen("text/{$f}_a.txt",'r');//空白換&nbsp檔
		while($str=fgets($file)){
			$file2=fopen("text/{$f}_b.txt",'r');//說明檔，滑鼠移上時出現
			for($j=0;$j<$count;$j++){//追到對應行號
				fgets($file2);
			}
			$str2=fgets($file2);//獲得說明文字
			fclose($file2);
			$count++;
			echo'<table class="codeEq" width="100%" title='.$str2.'><tr><td align="right" style="width:2em; color:#00C;">';
			echo $count;//編號
			echo'</td><td align="left" style="padding-left:13px;">';
			echo $str;//內容
			echo'</td></tr></table>';
		}
		fclose($file);
		echo'</code>
		</div>
		<p><b>說明</b></p><div style="border:1px solid #000; background:#F7F7F7;">
			';//說明
		$count=0;//編號
		$file=fopen("text/{$f}_b.txt",'r');//說明檔
		while($str=fgets($file)){
			$count++;
			echo'<table class="codeEq" width="100%"><tr><td align="right" style="width:2em; color:#00C;">';
			echo $count;//編號
			echo'</td><td align="left" style="padding-left:13px;">';
			echo $str;//內容
			echo'</td></tr></table>';
		}
		fclose($file);
		echo'
		</div><p><b>執行結果</b></p>';//執行結果
		echo"<img src='result_img/{$f}.jpg'/><br/>";
		echo'<p><b>程式碼下載</b></p>';//程式碼下載
		echo"(<a href='code/{$f}.c' target='_blank'>{$f}.c</a>)<br/>";
	}else
		echo'請選擇檔案';
?>
</div>
</body>