#!/bin/bash

# ✅ مسار المشروع
project_dir="E:/projects/my library"
cd "$project_dir" || { echo "❌ Failed to cd into $project_dir"; exit 1; }

# ✅ إنشاء ملف تاريخ الإنشاء لو مش موجود
created_file=".created_at"
if [ ! -f "$created_file" ]; then
    created_date=$(date '+%Y-%m-%d_%H-%M-%S')
    echo "$created_date" > "$created_file"
    echo "🆕 Created project date: $created_date"
else
    created_date=$(cat "$created_file")
    echo "📅 Project originally created at: $created_date"
fi

# ✅ إنشاء Snapshot باسم تاريخ الإنشاء
snapshot_dir="E:/projects/_snapshots_my_library"
snapshot_path="$snapshot_dir/$created_date"

if [ ! -d "$snapshot_path" ]; then
    mkdir -p "$snapshot_path"
    cp -r "$project_dir" "$snapshot_path"
    echo "📁 Snapshot created at: $snapshot_path"
else
    echo "📦 Snapshot already exists at: $snapshot_path"
fi

# ✅ تحقق من وجود Git repo
if [ ! -d ".git" ]; then
    echo "⚙️ Initializing Git repository..."
    git init
    git remote add origin https://github.com/osama-mohamoud2006/My-CPP-LIBRARY.git
fi

# ✅ تحديد اسم الفرع الحالي تلقائيًا
branch=$(git symbolic-ref --short HEAD 2>/dev/null)

# ✅ لو مفيش فرع، اعمل واحد اسمه main
if [ -z "$branch" ]; then
    branch="main"
    git checkout -b "$branch"
fi

# ✅ Git commands
echo "🔄 Pulling latest changes from origin/$branch..."
git pull origin "$branch" --quiet

git add -u
git add .

commit_msg="Auto commit: $(date '+%Y-%m-%d %H:%M:%S')"
git commit -m "$commit_msg" --quiet

echo "🚀 Pushing to origin/$branch..."
git push origin "$branch" --quiet

echo "✅ Done!"
