<?php
class js{//JAVASCRIPT
	function usejs($action){
		echo "<script type='text/javascript'>{$action}</script>";
	}
}
class file{//�ɮ׬���
	function readLine($url){//�[�ݤ@��
		$file=fopen($url,'r');
		$content=fgets($file);
		fclose($file);
		return $content;
	}
	function readAll($url){//�[�ݥ���
		$file=fopen($url,'r');
		while($str=fgets($file))
			$content.=$str.'<br/>';
		fclose($file);
		return $content;
	}
	function write($url,$content){//���g�ɮ�
		$file=fopen($url,'w');
		fputs($file,$content);
		fclose($file);
	}
	function add($url,$content){//�g�J�b�ɮפ���
		$file=fopen($url,'a');
		fputs($file,$content);
		fclose($file);
	}
	function deleteDirectory($dir) {//�j��R���ؿ�  �A��PHP5.4�H�U?
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
class variable{//���IP
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
�D�W�ߦs�b
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
	function query($sql){//�s��Ʈw
		return mysql_query($sql,$this->setdb());
	}
}*/
//�s�边
/*require("fckeditor/fckeditor.php");
require("fckeditor/ckfinder/ckfinder.php");
function editor($colContext=NULL,$width=600,$height=300){//��POST['colContext']
	$oFCKeditor = new FCKeditor('colContext') ;
	$oFCKeditor->BasePath='fckeditor/';
	//�]�w�L�s��������j�p
	$oFCKeditor->Width  = $width ;
	$oFCKeditor->Height = $height ;
	//�[���~��
	CKFinder::SetupFCKeditor( $oFCKeditor, 'fckeditor/ckfinder/' ) ;
	//�w�q�@�}�l�L�����e
	$oFCKeditor->Value = $colContext ;
	//�I�s
	$FKeditorPackage=$oFCKeditor->Create();
	// �`�� :  $FKeditorPackage �I�s�s�边
	return $FKeditorPackage;
}*/
?>