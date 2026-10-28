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

// Function: sub_01C8DB68
// Address: 0x1c8db68 - 0x1c8dbf8
void sub_01C8DB68_0x1c8db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8DB68_0x1c8db68");
#endif

    switch (ctx->pc) {
        case 0x1c8db7cu: goto label_1c8db7c;
        case 0x1c8db90u: goto label_1c8db90;
        case 0x1c8db94u: goto label_1c8db94;
        case 0x1c8dbdcu: goto label_1c8dbdc;
        default: break;
    }

    ctx->pc = 0x1c8db68u;

    // 0x1c8db68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8db6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8db70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8db70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8db74: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8DB74u;
    SET_GPR_U32(ctx, 31, 0x1C8DB7Cu);
    ctx->pc = 0x1C8DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DB74u;
    // 0x1c8db78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8DB74u, 0x1C8DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DB7Cu;
label_1c8db7c:
    // 0x1c8db7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8db7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8db80: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8DB80u;
    {
        const bool branch_taken_0x1c8db80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DB80u;
        // 0x1c8db84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8db80) {
            ctx->pc = 0x1C8DBA4u;
            goto label_1c8dba4;
        }
    }
    ctx->pc = 0x1C8DB88u;
    // 0x1c8db88: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8DB88u;
    SET_GPR_U32(ctx, 31, 0x1C8DB90u);
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8DB88u, 0x1C8DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DB90u;
label_1c8db90:
    // 0x1c8db90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8db90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c8db94:
    // 0x1c8db94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8db94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8db98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8db98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8db9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DB9Cu;
        // 0x1c8dba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DBA4u;
label_1c8dba4:
    // 0x1c8dba4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C8DBA4u;
    {
        const bool branch_taken_0x1c8dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DBA4u;
        // 0x1c8dba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dba4) {
            ctx->pc = 0x1C8DB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8db94;
        }
    }
    ctx->pc = 0x1C8DBACu;
    // 0x1c8dbac: 0x0  nop
    ctx->pc = 0x1c8dbacu;
    // NOP
    // 0x1c8dbb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8dbb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8dbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dbb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8dbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8dbbc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8dbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8dbc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8dbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8dbc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8dbc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dbc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8dbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dbcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8dbccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dbd0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c8dbd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8dbd4: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8DBD4u;
    SET_GPR_U32(ctx, 31, 0x1C8DBDCu);
    ctx->pc = 0x1C8DBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DBD4u;
    // 0x1c8dbd8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8DBD4u, 0x1C8DBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DBDCu;
label_1c8dbdc:
    // 0x1c8dbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8dbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dbe0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8dbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8dbe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8dbe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8dbe8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c8dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8dbec: 0x87233da  j           func_1C8CF68
    ctx->pc = 0x1C8DBECu;
    ctx->pc = 0x1C8DBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DBECu;
    // 0x1c8dbf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    sub_01C8CF68_0x1c8cf68(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8DBF4u;
    // 0x1c8dbf4: 0x0  nop
    ctx->pc = 0x1c8dbf4u;
    // NOP
    ctx->pc = 0x1c8dbf8u;
}
