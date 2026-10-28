#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C11FC8
// Address: 0x1c11fc8 - 0x1c12070
void sub_01C11FC8_0x1c11fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11FC8_0x1c11fc8");
#endif

    switch (ctx->pc) {
        case 0x1c11ff0u: goto label_1c11ff0;
        case 0x1c12004u: goto label_1c12004;
        case 0x1c12008u: goto label_1c12008;
        case 0x1c12024u: goto label_1c12024;
        case 0x1c1204cu: goto label_1c1204c;
        case 0x1c12068u: goto label_1c12068;
        default: break;
    }

    ctx->pc = 0x1c11fc8u;

    // 0x1c11fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11fcc: 0x240f00eb  addiu       $t7, $zero, 0xEB
    ctx->pc = 0x1c11fccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x1c11fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c11fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c11fd4: 0x108f001f  beq         $a0, $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C11FD4u;
    {
        const bool branch_taken_0x1c11fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C11FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11FD4u;
        // 0x1c11fd8: 0x288f00ec  slti        $t7, $a0, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11fd4) {
            ctx->pc = 0x1C12054u;
            goto label_1c12054;
        }
    }
    ctx->pc = 0x1C11FDCu;
    // 0x1c11fdc: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C11FDCu;
    {
        const bool branch_taken_0x1c11fdc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11FDCu;
        // 0x1c11fe0: 0x240f00ea  addiu       $t7, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11fdc) {
            ctx->pc = 0x1C1202Cu;
            goto label_1c1202c;
        }
    }
    ctx->pc = 0x1C11FE4u;
    // 0x1c11fe4: 0x108f000b  beq         $a0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C11FE4u;
    {
        const bool branch_taken_0x1c11fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C11FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11FE4u;
        // 0x1c11fe8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11fe4) {
            ctx->pc = 0x1C12014u;
            goto label_1c12014;
        }
    }
    ctx->pc = 0x1C11FECu;
    // 0x1c11fec: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x1c11fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
label_1c11ff0:
    // 0x1c11ff0: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x1c11ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x1c11ff4: 0x2484f7c0  addiu       $a0, $a0, -0x840
    ctx->pc = 0x1c11ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965184));
    // 0x1c11ff8: 0x24a52d30  addiu       $a1, $a1, 0x2D30
    ctx->pc = 0x1c11ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11568));
    // 0x1c11ffc: 0xc703df2  jal         func_1C0F7C8
    ctx->pc = 0x1C11FFCu;
    SET_GPR_U32(ctx, 31, 0x1C12004u);
    ctx->pc = 0x1C12000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11FFCu;
    // 0x1c12000: 0x24060333  addiu       $a2, $zero, 0x333 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 819));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F7C8u, 0x1C11FFCu, 0x1C12004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12004u;
label_1c12004:
    // 0x1c12004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c12004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c12008:
    // 0x1c12008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c12008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1200c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1200Cu;
        // 0x1c12010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1200Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C12014u;
label_1c12014:
    // 0x1c12014: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c12014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12018: 0x3c0601c2  lui         $a2, 0x1C2
    ctx->pc = 0x1c12018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)450 << 16));
    // 0x1c1201c: 0xc7041e4  jal         func_1C10790
    ctx->pc = 0x1C1201Cu;
    SET_GPR_U32(ctx, 31, 0x1C12024u);
    ctx->pc = 0x1C12020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1201Cu;
    // 0x1c12020: 0x24c6b3b0  addiu       $a2, $a2, -0x4C50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10790u, 0x1C1201Cu, 0x1C12024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12024u;
label_1c12024:
    // 0x1c12024: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C12024u;
    {
        const bool branch_taken_0x1c12024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C12028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12024u;
        // 0x1c12028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12024) {
            ctx->pc = 0x1C12008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c12008;
        }
    }
    ctx->pc = 0x1C1202Cu;
label_1c1202c:
    // 0x1c1202c: 0x240f00ec  addiu       $t7, $zero, 0xEC
    ctx->pc = 0x1c1202cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x1c12030: 0x148fffef  bne         $a0, $t7, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C12030u;
    {
        const bool branch_taken_0x1c12030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C12034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12030u;
        // 0x1c12034: 0x3c0401c1  lui         $a0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12030) {
            ctx->pc = 0x1C11FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11ff0;
        }
    }
    ctx->pc = 0x1C12038u;
    // 0x1c12038: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c12038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1203c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c1203cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12040: 0x3c0601c2  lui         $a2, 0x1C2
    ctx->pc = 0x1c12040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)450 << 16));
    // 0x1c12044: 0xc70431c  jal         func_1C10C70
    ctx->pc = 0x1C12044u;
    SET_GPR_U32(ctx, 31, 0x1C1204Cu);
    ctx->pc = 0x1C12048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12044u;
    // 0x1c12048: 0x24c6b460  addiu       $a2, $a2, -0x4BA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10C70u, 0x1C12044u, 0x1C1204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1204Cu;
label_1c1204c:
    // 0x1c1204c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C1204Cu;
    {
        const bool branch_taken_0x1c1204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C12050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1204Cu;
        // 0x1c12050: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1204c) {
            ctx->pc = 0x1C12008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c12008;
        }
    }
    ctx->pc = 0x1C12054u;
label_1c12054:
    // 0x1c12054: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c12054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12058: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c12058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1205c: 0x3c0601c2  lui         $a2, 0x1C2
    ctx->pc = 0x1c1205cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)450 << 16));
    // 0x1c12060: 0xc70425e  jal         func_1C10978
    ctx->pc = 0x1C12060u;
    SET_GPR_U32(ctx, 31, 0x1C12068u);
    ctx->pc = 0x1C12064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12060u;
    // 0x1c12064: 0x24c6b3e0  addiu       $a2, $a2, -0x4C20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10978u, 0x1C12060u, 0x1C12068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12068u;
label_1c12068:
    // 0x1c12068: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C12068u;
    {
        const bool branch_taken_0x1c12068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12068u;
        // 0x1c1206c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12068) {
            ctx->pc = 0x1C12008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c12008;
        }
    }
    ctx->pc = 0x1C12070u;
}
