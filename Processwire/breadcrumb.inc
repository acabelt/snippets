<?php
$i = 0;
$pos = $i++;
?>

<div class="breadcrumb">
    <ul itemscope itemtype="http://schema.org/BreadcrumbList">
       
        <li itemprop="itemListElement" itemscope itemtype="http://schema.org/ListItem"><a itemprop="item" href="/" title="Home"><span itemprop="name"><i class="fa fa-home"></i></span></a><meta itemprop="position" content="<?php echo $i++ ?>" /></li>

        <?php foreach($page->parentsUntil('id=1') as $parent): ?>
        <li itemprop="itemListElement" itemscope itemtype="http://schema.org/ListItem"><a itemprop="item" href="<?php echo $parent->url ?>" title="<?php echo $parent->title ?>"><span itemprop="name"><?php echo $parent->title ?></span></a><meta itemprop="position" content="<?php echo $i++ ?>" /></li>
        <?php endforeach; ?>

        <li><?php echo $page->title ?></li>
    </ul>
</div>