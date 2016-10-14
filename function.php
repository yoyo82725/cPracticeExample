<?php
class js{//JAVASCRIPT
	function usejs($action){
		echo "<script type='text/javascript'>{$action}</script>";
	}
}
class file{//檔案相關
	function readLine($url){//觀看一行
		$file=fopen($url,'r');
		$content=fgets($file);
		fclose($file);
		return $content;
	}
	function readAll($url){//觀看全部
		$file=fopen($url,'r');
		while($str=fgets($file))
			$content.=$str.'<br/>';
		fclose($file);
		return $content;
	}
	function write($url,$content){//重寫檔案
		$file=fopen($url,'w');
		fputs($file,$content);
		fclose($file);
	}
	function add($url,$content){//寫入在檔案之後
		$file=fopen($url,'a');
		fputs($file,$content);
		fclose($file);
	}
	function deleteDirectory($dir) {//強制刪除目錄  適用PHP5.4以下?
		if (!file_exists($dir)) return true;  
		if (!is_dir($dir) || is_link($dir)) return unlink($dir);  
			foreach (scandir($dir) as $item) {  
				if ($item == '.' || $item == '..') continue;  
				if (!deleteDirectory($dir . "/" . $item)) {  
					chmod($dir . "/" . $item, 0777);  
					if (!deleteDirectory($dir . "/" . $item)) return false;  
				};  
			}  
			return rmdir($dir);  
	}  
}
class variable{//抓取IP
	function getIp(){
		if (!empty($_SERVER['HTTP_CLIENT_IP']))
			$ip=$_SERVER['HTTP_CLIENT_IP'];
		else if (!empty($_SERVER['HTTP_X_FORWARDED_FOR']))
			$ip=$_SERVER['HTTP_X_FORWARDED_FOR'];
		else
			$ip=$_SERVER['REMOTE_ADDR'];
		return ip;
	}
}
/*===============
非獨立存在
=================*/
/*class sql{
	function setDb(){//config
		$hostname='localhost';
		$username='root';
		$connDb='funhw';
		$password = '123456';
		$link = mysql_connect($hostname, $username, $password) or die(mysql_error());
		mysql_select_db($connDb) or die("Could not select database");
		mysql_query("SET NAMES utf8");
		mysql_query("SET CHARACTER_SET_CLIENT=utf8"); 
		mysql_query("SET CHARACTER_SET_RESULTS=utf8");
		putenv("TZ=Asia/Taipei");  
		return $link;
	}
	function query($sql){//連資料庫
		return mysql_query($sql,$this->setdb());
	}
}*/
//編輯器
/*require("fckeditor/fckeditor.php");
require("fckeditor/ckfinder/ckfinder.php");
function editor($colContext=NULL,$width=600,$height=300){//傳POST['colContext']
	$oFCKeditor = new FCKeditor('colContext') ;
	$oFCKeditor->BasePath='fckeditor/';
	//設定他編輯視窗的大小
	$oFCKeditor->Width  = $width ;
	$oFCKeditor->Height = $height ;
	//加載外掛
	CKFinder::SetupFCKeditor( $oFCKeditor, 'fckeditor/ckfinder/' ) ;
	//定義一開始他的內容
	$oFCKeditor->Value = $colContext ;
	//呼叫
	$FKeditorPackage=$oFCKeditor->Create();
	// 總結 :  $FKeditorPackage 呼叫編輯器
	return $FKeditorPackage;
}*/
?>